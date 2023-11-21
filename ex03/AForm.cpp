/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:48:56 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/21 19:59:03 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* Operators */

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << "AForm name : " << form.getName();
	out << " , Aform signing grade : " << form.getSigngrade();
	out << " , Aform exec grade : " << form.getExecgrade();
	if (form.getSigned())
		out << " , signed : yes";
	else
		out << " , signed : no";
	return (out);
}

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

/*Constructor and Destructor */

AForm::AForm(void) : _name("unknown form"),_signed(false), _signgrade(1), _execgrade(1), _target("unknown")  {}

AForm::AForm(std::string const name, int signrade , int execgrade, std::string const target) : _name(name), _signed(false), _signgrade(signrade), _execgrade(execgrade), _target(target)
{
    if (_signgrade > 150 || _execgrade > 150)
		throw (GradeTooLowException());
	else if (_signgrade < 1 || _execgrade < 1)
		throw (GradeTooHighException());
}

AForm::AForm(const AForm &copy) :  _name(copy._name), _signgrade(copy._signgrade), _execgrade(copy._execgrade)
{
    *this = copy;
}

AForm::~AForm(void) {}

/* Getters and Setters */

std::string	AForm::getName(void) const
{
	return (_name);
}

int	AForm::getSigngrade(void) const
{
	return (_signgrade);
}

int	AForm::getExecgrade(void) const
{
	return (_execgrade);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

std::string	AForm::getTarget(void) const
{
	return (_target);
}

void	AForm::setSigned(bool sig)
{
	_signed = sig;
} 

/* Exceptions */

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

const char* AForm::NotSignedException::what(void) const throw()
{
	return ("Form is not signed");
}

/* Functions */

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (_signed)
		return ;
	if (bur.getGrade() <= _signgrade)
		_signed = true;
	else
		throw (GradeTooLowException());
}

void	AForm::checkexec(Bureaucrat const &executor) const
{
	if (!_signed)
		throw (NotSignedException());
	else if (executor.getGrade() > _execgrade)
		throw (GradeTooLowException());
}	

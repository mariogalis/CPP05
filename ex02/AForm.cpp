/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:48:56 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/31 17:56:42 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* Operators */

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << "AForm name : " << form.getName();
	out << " , aform signing grade : " << form.getSigngrade();
	out << " , aform exec grade : " << form.getSigngrade();
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

AForm::AForm(void) : _name("unknown form"),_signed(false), _signgrade(1), _execgrade(1)  {}

AForm::AForm(std::string const name, bool sign , int signrade , int execgrade) : _name(name), _signed(false), _signgrade(signrade), _execgrade(execgrade)
{
    if(name.empty())
        _name = "unknown form";
    if (_signgrade > 150 || _execgrade > 150)
		throw (GradeTooLowException());
	else if (_signgrade < 1 || _execgrade < 1)
		throw (GradeTooHighException());
	_signed = sign;
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

/* Exceptions */

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
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

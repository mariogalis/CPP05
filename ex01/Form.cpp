/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:52:05 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/18 18:42:00 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/* Operators */

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form name : " << form.getName();
	out << " , form signing grade : " << form.getSigngrade();
	out << " , form exec grade : " << form.getSigngrade();
	if (form.getSigned())
		out << " , signed : yes";
	else
		out << " , signed : no";
	return (out);
}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

/*Constructor and Destructor */

Form::Form(void) : _name("unknown form"),_signed(false), _signgrade(1), _execgrade(1)  {}

Form::Form(std::string const name, bool sign , int signrade , int execgrade) : _name(name), _signed(false), _signgrade(signrade), _execgrade(execgrade)
{
    if(name.empty())
        _name = "unknown form";
    if (_signgrade > 150 || _execgrade > 150)
		throw (GradeTooLowException());
	else if (_signgrade < 1 || _execgrade < 1)
		throw (GradeTooHighException());
	_signed = sign;
}

Form::Form(const Form &copy) :  _name(copy._name), _signgrade(copy._signgrade), _execgrade(copy._execgrade)
{
    *this = copy;
}

  Form::~Form(void) {}

/* Getters and Setters */

std::string	Form::getName(void) const
{
	return (_name);
}

int	Form::getSigngrade(void) const
{
	return (_signgrade);
}

int	Form::getExecgrade(void) const
{
	return (_execgrade);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

/* Exceptions */

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

/* Functions */

void	Form::beSigned(const Bureaucrat &bur)
{
	if (_signed)
		return ;
	if (bur.getGrade() <= _signgrade)
		_signed = true;
	else
		throw (GradeTooLowException());
}

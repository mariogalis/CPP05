/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:52:05 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/04 18:56:27 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*Constructor and Destructor */

Form::Form(void) _name("unknown form"),_signed(false), _signgrade(1), _execgrade(1)  {}

Form::(std::string const name, bool sign , int signrade , int execgrade) _name(name), _signed(false), _signgrade(signrade), _execgrade(execgrade)
{
    if(name.empty())
        _name = "unknown form";
    if (_sgrade > 150 || _egrade > 150)
		throw (GradeTooLowException());
	else if (_sgrade < 1 || _egrade < 1)
		throw (GradeTooHighException());
}

  Form(const Form &copy)  _name(copy.name), _signgrade(copy.signrade), _execgrade(copy.execgrade)
  {
    *this = copy;
  }

  Form::~Form(void) {}


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

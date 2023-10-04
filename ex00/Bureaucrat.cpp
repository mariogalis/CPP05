/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:40:49 by codespace         #+#    #+#             */
/*   Updated: 2023/10/04 18:53:08 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*Constructor and Destructor */

Bureaucrat::Bureaucrat(void) : _name("Unnamed boring Bureaucrat"), _grade(150)
{
    std::cout << GREEN << "Unnamed boring Bureaucrat constructor called" << std::endl << RESET;    
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
    if(name.empty())
        _name = "Unnamed boring Bureaucrat";
	if (_grade > 150)
		throw (GradeTooLowException());
	else if (_grade < 1)
		throw (GradeTooHighException());

    std::cout  << GREEN << _name<< " constructor called " << std::endl << RESET;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << RED << "The Bureaucrat is dead" << std::endl << RESET;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
     std::cout  << GREEN << "Bureaucrat clone machine called" << std::endl << RESET;
}

/*Getters and Setters*/

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

/* Exceptions */

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Error. Grade too high. Maximum grade is 1");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Error. Grade too low. Minimum grade is 150");
} 

/* Functions */

void	Bureaucrat::incrementGrade(int n)
{
	if (_grade - n > 150)
		throw (GradeTooLowException());
	else if (_grade - n < 1)
		throw (GradeTooHighException());
	else
		_grade -= n;
}

void	Bureaucrat::decrementGrade(int n)
{
		if (_grade + n > 150)
		throw (GradeTooLowException());
	else if (_grade + n < 1)
		throw (GradeTooHighException());
	else
		_grade += n;
}


/* Operators */

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << "Bureaucrat name : " << bureaucrat.getName();
	out << " , bureaucrat grade : " << bureaucrat.getGrade();
	return (out);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    if(this != &copy)
	{
		_grade = copy._grade;
        _name = copy._name;
	}
    return(*this);
}





/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:29:48 by codespace         #+#    #+#             */
/*   Updated: 2023/11/21 20:13:50 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern(void) {}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

AForm	*newShrubbery(std::string const target)
{
	(void)target;
	return (NULL);
}

AForm	*Intern::makeForm(std::string const formname, std::string const target) const
{
	int			i;
	std::string	form[3];
	AForm		*(*ptrf[3])(std::string const);

	form[0] = "ShrubberyCreation";
	form[1] = "RobotomyRequest";
	form[2] = "PresidentialPardon";
	ptrf[0] = &ShrubberyCreationForm::newShrubbery;
	ptrf[1] = &RobotomyRequestForm::newRobotomy;
	ptrf[2] = &PresidentialPardonForm::newPresidential;
	for (i = 0; i < 3; i++)
	{
		if (!form[i].compare(formname))
		{
			std::cout << "Intern creates " << form[i] << "Form" << std::endl;
			return (ptrf[i](target));
		}
	}
	std::cout << "Intern could not create " << formname << " form" << std::endl;
	return (NULL);
}

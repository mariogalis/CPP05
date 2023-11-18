/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:40 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/18 18:32:05 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :AForm("PresidentialPardonForm", 25, 5, "unknown") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :AForm("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5, other._target)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkexec(executor);
	std::cout << executor.getName() << " executes " << _name << std::endl;
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
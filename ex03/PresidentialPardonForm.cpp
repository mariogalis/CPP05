/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:40 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/21 20:16:13 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :AForm("PresidentialPardonForm", 25, 5, "unknown") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :AForm("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5, other.getTarget())
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		this->setSigned(other.getSigned());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkexec(executor);
	std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

AForm	*PresidentialPardonForm::newPresidential(std::string const target)
{
	return (new PresidentialPardonForm(target));
}

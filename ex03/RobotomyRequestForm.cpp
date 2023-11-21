/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:45 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/21 20:15:58 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45, "unknown") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45, other.getTarget())
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		this->setSigned(other.getSigned());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkexec(executor);
	std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	srand (time(NULL));
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy has been a failure" << std::endl;
}

AForm	*RobotomyRequestForm::newRobotomy(std::string const target)
{
	return (new RobotomyRequestForm(target));
}

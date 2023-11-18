/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:26 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/18 19:40:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern	intern;
	AForm	*form;
	
	form = intern.makeForm("unknown", "unknown");

	std::cout << std::endl;
	std::cout << BLUE << "\t*********  ShrubberyCreationForm  *********" <<  RESET << std::endl << std::endl;
	{
		Bureaucrat	bur("Bob", 146);

		form = intern.makeForm("ShrubberyCreation", "home");
		std::cout << "----------" << std::endl;
		bur.executeForm(*form);
		bur.signForm(*form);
		bur.incrementGrade(1);
		bur.signForm(*form);
		bur.executeForm(*form);
		bur.incrementGrade(12);
		bur.executeForm(*form);

	}
	std::cout << std::endl;
	std::cout << BLUE << "\t*********  RobotomyRequestForm  *********" <<  RESET << std::endl << std::endl;

	{
		Bureaucrat	bur("Bob", 73);

		form = intern.makeForm("RobotomyRequest", "Jim");
		bur.executeForm(*form);
		bur.signForm(*form);
		bur.incrementGrade(1);
		bur.signForm(*form);
		bur.executeForm(*form);
		bur.incrementGrade(27);
		bur.executeForm(*form);

	}
	std::cout << std::endl;
		 	std::cout << BLUE << "\t*********  PresidentialPardonForm  *********" <<  RESET << std::endl << std::endl;

	{
		Bureaucrat	bur("Bob", 26);
		
		form = intern.makeForm("PresidentialPardon", "Jim");
		bur.executeForm(*form);
		bur.signForm(*form);
		bur.incrementGrade(1);
		bur.signForm(*form);
		bur.executeForm(*form);
		bur.incrementGrade(20);
		bur.executeForm(*form);

	}
}
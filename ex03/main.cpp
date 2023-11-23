/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:26 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/23 10:48:31 by codespace        ###   ########.fr       */
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
		Bureaucrat	bur("Bob", 140);

		form = intern.makeForm("ShrubberyCreation", "home");
		std::cout << "----------" << std::endl;
		
		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << *form << std::endl << RESET;
		bur.executeForm(*form);
		bur.signForm(*form);
		
		std::cout << YELLOW << *form << std::endl << RESET;
		bur.executeForm(*form);
		
		bur.incrementGrade(26);
		std::cout << GREEN << bur << std::endl << RESET;
		bur.executeForm(*form);

	}
	std::cout << std::endl;
	std::cout << BLUE << "\t*********  RobotomyRequestForm  *********" <<  RESET << std::endl << std::endl;

	{
		Bureaucrat	bur("Bob", 73);

		form = intern.makeForm("RobotomyRequest", "Jim");
		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << *form << std::endl << RESET;
	 	bur.executeForm(*form);
	 	bur.signForm(*form);
	
		
		bur.incrementGrade(50);
		std::cout << GREEN << bur << std::endl << RESET;
		bur.signForm(*form);
		std::cout << YELLOW << *form << std::endl << RESET;
		bur.executeForm(*form);


	}
	std::cout << std::endl;
		 	std::cout << BLUE << "\t*********  PresidentialPardonForm  *********" <<  RESET << std::endl << std::endl;

	{
		Bureaucrat	bur("Bob", 26);
		
		form = intern.makeForm("PresidentialPardon", "Jim");
		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << form << std::endl << RESET;
	 	bur.executeForm(*form);
	 	bur.signForm(*form);
		
	 	bur.incrementGrade(15);
	 	bur.signForm(*form);

		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << *form << std::endl << RESET;
		
	 	bur.executeForm(*form);
		
	 	bur.incrementGrade(10);

		std::cout << GREEN << bur << std::endl << RESET;
		
	 	bur.executeForm(*form);
	}
}
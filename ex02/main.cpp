/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:26 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/23 10:36:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << BLUE << "\t*********  ShrubberyCreationForm  *********" <<  RESET << std::endl << std::endl;

	{
		Bureaucrat	bur("Alan", 140);
		ShrubberyCreationForm	form("home");

		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << form << std::endl << RESET;
		bur.executeForm(form);
		bur.signForm(form);
		
		std::cout << YELLOW << form << std::endl << RESET;
		bur.executeForm(form);
		
		bur.incrementGrade(26);
		std::cout << GREEN << bur << std::endl << RESET;
		bur.executeForm(form);
	}
	std::cout << std::endl;
		std::cout << BLUE << "\t*********  RobotomyRequestForm  *********" <<  RESET << std::endl << std::endl;
	{
	 	Bureaucrat	bur("Bob", 73);
	 	RobotomyRequestForm	form("Jim");

		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << form << std::endl << RESET;
	 	bur.executeForm(form);
	 	bur.signForm(form);
	
		
		bur.incrementGrade(50);
		std::cout << GREEN << bur << std::endl << RESET;
		bur.signForm(form);
		std::cout << YELLOW << form << std::endl << RESET;
		bur.executeForm(form);

	}
	
	 std::cout << std::endl;
	 	std::cout << BLUE << "\t*********  PresidentialPardonForm  *********" <<  RESET << std::endl << std::endl;

	{
	 	Bureaucrat	bur("Charlie", 26);
	 	PresidentialPardonForm	form("Jim");

		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << form << std::endl << RESET;
	 	bur.executeForm(form);
	 	bur.signForm(form);
		
	 	bur.incrementGrade(15);
	 	bur.signForm(form);

		std::cout << GREEN << bur << std::endl << RESET;
		std::cout << YELLOW << form << std::endl << RESET;
		
	 	bur.executeForm(form);
		
	 	bur.incrementGrade(10);

		std::cout << GREEN << bur << std::endl << RESET;
		
	 	bur.executeForm(form);
	}
    return 0;
}
 
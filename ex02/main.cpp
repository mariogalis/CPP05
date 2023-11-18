/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:26 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/18 19:25:25 by codespace        ###   ########.fr       */
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

		bur.executeForm(form);
		bur.signForm(form);
		bur.executeForm(form);
		bur.incrementGrade(1);
		bur.executeForm(form);
		bur.signForm(form);
	 	bur.executeForm(form);
		bur.incrementGrade(12);
		bur.executeForm(form);
	}
	std::cout << std::endl;
		std::cout << BLUE << "\t*********  RobotomyRequestForm  *********" <<  RESET << std::endl << std::endl;
	{
	 	Bureaucrat	bur1("Bob", 73);
	 	RobotomyRequestForm	form("Jim");

	 	bur1.executeForm(form);
	 	bur1.signForm(form);
	 	bur1.incrementGrade(1);
	 	bur1.signForm(form);
	 	bur1.executeForm(form);
	 	bur1.incrementGrade(27);
	 	bur1.executeForm(form);
	}
	
	 std::cout << std::endl;
	 	std::cout << BLUE << "\t*********  PresidentialPardonForm  *********" <<  RESET << std::endl << std::endl;

	{
	 	Bureaucrat	bur2("Charlie", 26);
	 	PresidentialPardonForm	form("Jim");

	 	bur2.executeForm(form);
	 	bur2.signForm(form);
	 	bur2.incrementGrade(1);
	 	bur2.signForm(form);
	 	bur2.executeForm(form);
	 	bur2.incrementGrade(20);
	 	bur2.executeForm(form);
	}
    return 0;
}
 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:40:57 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 15:38:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* !!!!!! CAMBIAR TODOS LOS HEADERS!!!!!!! */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bur("Alan", 140);
	
	std::cout << YELLOW << bur <<  RESET << std::endl;  //Print Bureaucrat
    
	try
	{
		bur.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << YELLOW << bur << RESET << std::endl ; //Print Bureaucrat
    
	try
	{
		bur.incrementGrade(130);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    
	std::cout << YELLOW << bur << RESET << std::endl;  //Print Bureaucrat
    
	try
	{
		bur.incrementGrade(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    
	std::cout << YELLOW << bur << RESET << std::endl;  //Print Bureaucrat
    
	try
	{
		Bureaucrat	bur2("Mario", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    
	try
	{
		Bureaucrat	bur2("Mario", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    try
	{
		Bureaucrat	bur2("Mario", 100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    return 0;
}

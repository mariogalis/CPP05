/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:47:44 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/21 17:30:19 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
		std::cout << YELLOW << bur2 << RESET << std::endl;  //Print Bureaucrat
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

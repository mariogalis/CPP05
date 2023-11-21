/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:48:41 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/21 17:58:49 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << BLUE << "\t*********  Previous Tests  *********" <<  RESET << std::endl << std::endl;
	
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
	
	

	std::cout << BLUE << "\t*********  New Tests  *********" <<  RESET << std::endl << std::endl;

	Form		formB("form 28B", 12, 12);
	Form		formC("form 28C", 12, 12);

	std::cout << bur << RESET << std::endl;  //Print Bureaucrat
	std::cout << formB << std::endl;
	bur.signForm(formB);
	bur.signForm(formB);
	std::cout << formB << std::endl;

	
	bur.decrementGrade(20);
	std::cout << bur << RESET << std::endl;  //Print Bureaucrat
	bur.signForm(formC);
	std::cout << formC << std::endl;
	std::cout << formB << std::endl;

    return 0;
}
 
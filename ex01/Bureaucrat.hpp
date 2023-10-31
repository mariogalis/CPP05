/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:48:29 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/31 17:48:32 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURECRAT_HPP
#define BURECRAT_HPP

# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define YELLOW				"\x1b[33m"
# define BLUE 				"\x1b[34m"

#include <iostream>
#include <iomanip>
#include "Form.hpp"

class Form;

class  Bureaucrat 
{
	private:

		const std::string	_name;
		int					_grade;

		/* Exceptions */
		
		class GradeTooHighException: public std::exception
		{
			public:

				const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:

				const char* what(void) const throw();
		};
 
	public:

		/*Constructor and Destructor */
		
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat(void);

		/*Getters and Setters*/

		std::string	getName(void) const;
		int	getGrade(void) const;
		
		/* Functions */

		void	incrementGrade(int n);
		void	decrementGrade(int n);
		void	signForm(Form &form);



		
		
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif

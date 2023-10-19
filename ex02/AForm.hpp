/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:37:50 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 15:37:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"


class Form
{
	private:
	
		std::string 	_name; 
		bool        	_signed;
		const int       _signgrade;
		const int       _execgrade;

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

		Form(void);
		Form(std::string const name, bool sign , int signrade , int execgrade);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form(void);

		std::string	getName(void) const;
		int			getSigngrade(void) const;
		int			getExecgrade(void) const;
		bool		getSigned(void) const;

		void		beSigned(const Bureaucrat &bur);
	
};

#endif

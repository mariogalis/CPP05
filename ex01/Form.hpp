/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:52:07 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/24 17:49:28 by magonzal         ###   ########.fr       */
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

class Bureaucrat;

class Form
{
	private:
	
		const std::string 	_name; 
		bool        		_signed;    // indicating whether it is signed
		const int       	_signgrade; // grade required to sign it.
		const int       	_execgrade; // grade required to execute it.

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
		Form(std::string const name, int signrade , int execgrade);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form(void);

		std::string	getName(void) const;
		int			getSigngrade(void) const;
		int			getExecgrade(void) const;
		bool		getSigned(void) const;

		void		beSigned(const Bureaucrat &bur);
	
};

std::ostream &operator<<(std::ostream &out, const Form &form);


#endif

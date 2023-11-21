/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:00 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/31 17:49:04 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define BLUE				"\x1b[34m"

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
	
		const std::string 	_name; 
		bool        		_signed;
		const int       	_signgrade;
		const int     		_execgrade;
		const std::string	_target;


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
		class NotSignedException: public std::exception
		{
			public:

				const char* what(void) const throw();
		};
		
	public:

		AForm(void);
		AForm(std::string const name, int signrade , int execgrade, std::string const target);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		~AForm(void);
		
		std::string		getName(void) const;
		int				getSigngrade(void) const;
		int				getExecgrade(void) const;
		bool			getSigned(void) const;
		std::string		getTarget(void) const;
		void			setSigned(bool sig);
		void			checkexec(Bureaucrat const & executor) const;
		void			beSigned(const Bureaucrat &bur);
		virtual void	execute(Bureaucrat const & executor) const = 0;
	
};

std::ostream &operator<<(std::ostream &out, const AForm &other);

#endif

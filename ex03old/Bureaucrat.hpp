/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:16 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/18 18:40:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURECRAT_HPP
#define BURECRAT_HPP

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

#include <iostream>
#include <iomanip>
#include "AForm.hpp"

class AForm;

class  Bureaucrat 
{
    private:

        Bureaucrat(void);
        const std::string   _name;
        int                 _grade;

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
        void	signForm(AForm &form);
		void	executeForm(AForm const &form);
        
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:40:55 by codespace         #+#    #+#             */
/*   Updated: 2023/10/03 07:27:34 by codespace        ###   ########.fr       */
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

class  Bureaucrat 
{
    private:

        std::string _name;
        int         _grade;

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



        
        
};

#endif
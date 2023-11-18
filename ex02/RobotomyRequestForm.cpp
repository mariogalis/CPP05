/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:45 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/18 18:28:11 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:

		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		void	execute(Bureaucrat const & executor) const;

	private:

		PresidentialPardonForm(void);
};

#endif
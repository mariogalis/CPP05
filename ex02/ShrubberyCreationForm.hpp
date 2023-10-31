/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:47:24 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/31 18:21:56 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM.HPP
# define SHRUBBERYCREATIONFORM.HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
    
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();

    private:
    
        ShrubberyCreationForm(void);    
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:52:07 by magonzal          #+#    #+#             */
/*   Updated: 2023/10/04 18:56:03 by magonzal         ###   ########.fr       */
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


class Form
{
    private:
    
        std::string _name const;
        bool        _signed;
        int         _signgrade const;
        int         _execgrade const;


    public:

        Form(void);
        Form(std::string const name, bool sign , int signrade , int execgrade);
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        ~Form(void);
    
}

#endif

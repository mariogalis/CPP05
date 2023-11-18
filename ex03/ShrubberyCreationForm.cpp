/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:49 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/18 19:31:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137, "unknown") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137, other._target)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkexec(executor);
	std::cout << executor.getName() << " executes " << _name << std::endl;
	std::ofstream outfile ((this->getTarget() + "_shrubbery").c_str());
    outfile << "               _-_          "   << std::endl <<
               "            /~~   ~~\\      "   << std::endl <<
               "         /~~         ~~\\   "   << std::endl <<
               "        {               }   "   << std::endl <<
               "        \\  _-     -_  /    "   << std::endl <<
               "           ~  \\ //  ~      "   << std::endl <<
               "        _- -   | | _- _     "   << std::endl <<
               "          _ -  | |   -_     "   << std::endl <<
               "              // \\         "   << std::endl;

    outfile.close();       
}  

AForm	*ShrubberyCreationForm::newShrubbery(std::string const target)
{
	return (new ShrubberyCreationForm(target));
}
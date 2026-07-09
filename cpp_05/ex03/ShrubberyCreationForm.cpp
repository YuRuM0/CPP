/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:34:51 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 17:18:06 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", false, 145, 137), target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
    if (this != &obj)
	{
        AForm::operator=(obj);
		this->target = obj.target;
	}
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : AForm(obj), target(obj.target)
{
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (target);
}

void ShrubberyCreationForm::act() const
{
	std::ofstream output_file(getTarget() + "_shrubbery.txt");
	if (output_file.is_open())
	{
		output_file << "   *    *  ()   *   *\n"
					<< "*        * /\\         *\n"
					<< "      *   /i\\    *  *\n"
					<< "    *     o/\\  *      *\n"
					<< " *       ///\\i\\    *\n"
					<< "     *   /*/o\\  *    *\n"
					<< "   *    /i//\\*\\      *\n"
					<< "        /o/*\\i\\   *\n"
					<< "  *    //i//o\\\\     *\n"
					<< "     *   /*/o\\  *    *\n"
					<< "   *    /i//\\*\\      *\n"
					<< "        /o/*\\i\\   *\n"
					<< " *     //i//o\\\\     *\n"
					<< "    * /*////\\\\i\\*\n"
					<< "    * /*////\\\\i\\*\n"
					<< "    * /*////\\\\i\\*\n"
					<< " *     //o//i\\*\\\\   *\n"
					<< "    * /i///*/\\\\\\o\\   *\n"
					<< "  *    *    ||     *\n" << std::endl;
		output_file.close();
	}
	else
	{
		std::cerr << "Error: could not open the file " << getTarget() + "_shrubbery.txt" << std::endl;
	}
}

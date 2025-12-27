/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:49:44 by yulpark           #+#    #+#             */
/*   Updated: 2025/12/27 19:08:59 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
: AForm("ShrubberyCreationForm", false, 145, 137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj)
: AForm(obj), target(obj.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	if (this != &obj)
		AForm::operator=(obj);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
const std::string &ShrubberyCreationForm::getType()
{
	return (this->target);
}

void ShrubberyCreationForm::action()const
{
	std::ofstream output_file(target + "_shrubbery.txt");
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
}


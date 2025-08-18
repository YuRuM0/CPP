/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:49:44 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/18 14:09:49 by yulpark          ###   ########.fr       */
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
		*this = obj;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
const std::string &ShrubberyCreationForm::getType()
{
	return (this->target);
}
void ShrubberyCreationForm::beSigned(Bureaucrat &B)
{
	if (B.getGrade() <= 145)
		this->sign = true;
	else
		throw GradeTooLowException();
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
	if (this->sign == false)
		throw UnsignedForm();
	if (executor.getGrade() <= 137)
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
	else
		throw GradeTooLowException();
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/12/27 19:08:54 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
: AForm("RobotomyRequestForm", false, 72, 45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj)
: AForm(obj), target(obj.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	if (this != &obj)
		AForm::operator=(obj);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action() const
{
	std::cout << "Drilling noise...." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomised. " << std::endl;
	else
		std::cout << "Robotomy failed.\n";
}

const std::string &RobotomyRequestForm::getTarget()
{
	return (this->target);
}

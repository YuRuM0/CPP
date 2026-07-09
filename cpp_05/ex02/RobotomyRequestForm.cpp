#include "RobotomyRequestForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 11:37:19 by ypark             #+#    #+#             */
/*   Updated: 2026/06/18 11:37:20 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : target(obj.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
    if (this != &obj)
	{
        AForm::operator=(obj);
		this->target = obj.target;
	}
    return (*this);

}

std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}

void RobotomyRequestForm::act() const
{
    std::cout << "Drilling noise....\n";
    int num = rand() % 2;
    if (num == 0)
        std::cout << getTarget() << "has been robotomised succesfully\n";
    else
        std::cout << getTarget() << ": robotomy failed\n";
}

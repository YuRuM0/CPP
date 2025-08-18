/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:05 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/18 00:13:48 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm :  public AForm
{
	private:
		std::string target;
		bool sign;
	public:
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(RobotomyRequestForm &obj);
		RobotomyRequestForm &operator=(RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		const std::string &getTarget();
		void beSigned(Bureaucrat &B) override;
		void execute(Bureaucrat const & executor)const override;
};

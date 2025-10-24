/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:49:45 by yulpark           #+#    #+#             */
/*   Updated: 2025/10/24 14:20:20 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm :  public AForm
{
	private:
		std::string target;
		bool sign;
	public:
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(ShrubberyCreationForm &obj);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		const std::string &getType();

		//void beSigned(Bureaucrat &B) override;
		void action()const override;
};

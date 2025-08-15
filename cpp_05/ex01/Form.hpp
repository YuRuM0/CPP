/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:09:22 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/15 17:14:25 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form // should inherit?
{
	private:
		const std::string name;
		bool sign;
		const int SignGrade;
		const int ExecGRade;
	public:
		Form();
		Form(const std::string name, bool sign, const int SignGrade, const int ExecGrade);
		Form(Form &obj);
		~Form();
		void beSigned(Bureaucrat *B);

};

std::ostream &operator<<(std::ostream &out, Form &obj);

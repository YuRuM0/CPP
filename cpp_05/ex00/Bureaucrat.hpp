/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:50:38 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/14 11:47:15 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class Bureaucrat
{
	private:
		const std::string name;
		unsigned int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat (Bureaucrat &obj);
		std::string getName();
		unsigned int getGrade();
		void incGrade(unsigned int amount);
		void decGrade(unsigned int amount);
		void setGrade(unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);

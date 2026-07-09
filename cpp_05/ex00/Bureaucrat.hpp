/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:51 by ypark             #+#    #+#             */
/*   Updated: 2026/06/04 16:50:12 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once // #ifndef Header #define header 

#include <iostream>
#include <string>
#include <cstdlib>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat &operator=(const Bureaucrat& obj);

        std::string getName() const;
		int getGrade() const;
        void incGrade(int amount);
        void decGrade(int amount);
        
        class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const noexcept override;
				// in std::exception, what() is a virtual func meant to give a textual description of the error
				// the exception doesn't escape; not caught inside
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:10:37 by ypark             #+#    #+#             */
/*   Updated: 2026/06/17 17:20:09 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once // #ifndef Header #define header 

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int execGrade;
    public:
        Form();
        ~Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form& obj);
        Form &operator=(const Form& obj);

        const std::string getName(void) const;
        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        void beSigned(const Bureaucrat &bureaucrat);
        
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

std::ostream &operator<<(std::ostream &out, Form &obj);
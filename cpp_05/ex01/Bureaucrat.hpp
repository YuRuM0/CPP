/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:51 by ypark             #+#    #+#             */
/*   Updated: 2026/06/17 17:20:25 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once // #ifndef Header #define header 

#include <iostream>
#include <string>
#include <cstdlib>
#include "Form.hpp"

class Form;

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

        void signForm(Form &Form) const;
        
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
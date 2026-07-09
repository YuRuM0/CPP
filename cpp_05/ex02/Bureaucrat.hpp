/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:51 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 16:31:58 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once // #ifndef Header #define header

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class AForm;

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

        void signForm(AForm &AForm) const;
		void executeForm(AForm const &form) const;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int execGrade;
    protected:
        // so that it goes through execute to run act. all the derived classes can still override
        virtual void act() const = 0 ;
    public:
        AForm();
        virtual ~AForm();
        AForm(const std::string name, bool isSigned, const int signGrade, const int execGrade);
        AForm(const AForm& obj);
        AForm &operator=(const AForm& obj);

        const std::string getName(void) const;
        bool getIsSigned(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        void beSigned(const Bureaucrat &bureaucrat);
        void execute(Bureaucrat const &executor) const;

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
        class Unsigned : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};
};

std::ostream &operator<<(std::ostream &out, AForm &obj);

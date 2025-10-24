/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:58:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/10/24 14:17:36 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm :  public AForm
{
	private:
		std::string target;
		bool sign;
	public:
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm &obj);
		PresidentialPardonForm &operator=(PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		const std::string &getTarget();
		void action() const override;
};

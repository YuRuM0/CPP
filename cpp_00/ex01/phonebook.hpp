/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:48:03 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/20 19:51:49 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iomanip>
#include "contact.hpp"

#define MAX_CONTENT 8

class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
		int		num_contacts;
	public:
		PhoneBook();
		~PhoneBook();
		void ADD(void);
		void print_result(void);
		void SEARCH(void);
};

#endif

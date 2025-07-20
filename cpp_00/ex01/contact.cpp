/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:48:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/19 20:20:35 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void Contact::add_contacts(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	while (first_name == "")
		std::cout << "First_name cannot be empty!";
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	while (last_name == "")
		std::cout << "Last_name cannot be empty!";
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	while (nickname == "")
		std::cout << "Nickname cannot be empty!";
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	for (int i; phone_number[i]; i++)
	{
		if (isdigit(phone_number[i]) != 1)
		{
			phone_number = "";
			break;
		}
	}
	while (phone_number == "")
		std::cout << "Phone_Number cannot be empty!";
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);
	while (darkest_secret == "")
		std::cout << "Darkest Secret canot be empty!";
}

int Contact::is_filled(void)
{
	if (first_name == "")
		return (0);
	return (1);
}

void Contact::print_contact(int index)
{

}

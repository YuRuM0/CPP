/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:48:08 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 15:35:15 by yulpark          ###   ########.fr       */
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

int ft_isdigit(std::string nums)
{
	for (int i = 0; nums[i]; i++)
	{
		if (!isdigit(nums[i]))
			return (0);
	}
	return (1);
}

std::string Contact::handle_phone_num(void)
{
	std::string input;
	while (true)
	{
		std::cout << "Phone Number: " << std::endl;
		std::getline(std::cin, input);
		if (input.length() < 10 || input.length() > 15)
		{
			std::cout << "Invalid input: the length of the phone number must be between 10 and 15\n";
			continue ;
		}
		if (ft_isdigit(input) != 1)
		{
			std::cout << "Invalide input: phone number requires numeric values\n";
			continue ;
		}
		break;
	}
	return (input);
}

std::string getValidInput(std::string msg)
{
	std::string input;

	while (true)
	{
		std::cout << msg << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		break;
	}
	return input;
}
void Contact::add_contacts(void)
{
	first_name = getValidInput("First name: ");
	last_name = getValidInput("Last name: ");
	nickname = getValidInput("Nickname: ");
	phone_number = handle_phone_num();
	darkest_secret = getValidInput("Darkest Secret: ");
}

std::string format(std::string value)
{
	if (value.length() > 10)
		return (value.substr(0,9) + ".");
	return (value);
}

void Contact::print_contact(int index)
{
	std::cout << "|" << std::setw(10) << std::right << (index + 1) << "|"
		<< std::setw(10) << std::right << format(first_name) << "|"
		<< std::setw(10) << std::right << format(last_name) << "|"
		<< std::setw(10) << std::right << format(nickname) << "|"
		<< std::endl;
}

void Contact::print_contact_specific(void)
{
	std::cout << "First name: " << (first_name) << std::endl;
	std::cout << "Last name: " << (last_name) << std::endl;
	std::cout << "Nickname:  " << (nickname) << std::endl;
	std::cout << "Phone Number: " << (phone_number) << std::endl;
	std::cout << "Darkest Secret: " << (darkest_secret) << std::endl;
}

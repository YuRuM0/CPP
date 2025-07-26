/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:48:01 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/26 15:40:56 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "=========================================================================\n";
	std::cout << "Welcome to the 80s and their unbelievable technology!\n";
	std::cout << "=========================================================================\n";

	std::cout << "Rules: \n";
	std::cout << "The PhoneBook stores upto 8 contacts.\n";
	std::cout << "When 9th contact given, the 1st contact will be replaces with the 9th.\n\n";

	std::cout << "Available Commands: \n";
	std::cout << "   ADD: save a new contact\n";
	std::cout << "   SEARCH: dispaly a specific contact\n";
	std::cout << "   EXIT: quits programe\n";

	std::cout << "\n";
	std::cout << "=========================================================================\n";
	std::cout << "\n";
	index = 0;
	num_contacts = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\n=========================================================================\n";
	std::cout << "Goodbye to the 80s and their unbelievable technology!\n";
	std::cout << "All the contacts are lost forever....\n";
	std::cout << "=========================================================================\n";
}

void PhoneBook::ADD(void)
{
	std::cout << "\n";
	contacts[index % MAX_CONTENT].add_contacts();
	index++;
	if (num_contacts < MAX_CONTENT)
		num_contacts++;
	std::cout << "\n";
}

void PhoneBook::print_result(void)
{
	int num = 0;
	std::cout << "|" << std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << "|" << std::endl;
	while (num < num_contacts)
	{
		contacts[num].print_contact(num);
		num++;
	}
}

void PhoneBook::SEARCH(void)
{
	std::string num;
	std::cout << "\n";
	if (num_contacts == 0)
	{
		std::cout << "No contacts saved in your PhoneBook! \n";
		return ;
	}
	print_result();
	while (true)
	{
		std::cout << "\n\nWrite the index of the contact that you want to search: \n";
		std::getline(std::cin, num);
		if (num[1])
		{
			std::cout << "Invalid index. Choose a number between 1 and 8.\n";
			continue;
		}
		if ((num[0] - '0') < 1 || (num[0] - '0') > MAX_CONTENT)
		{
			std::cout << "Invalid index. Choose a number between 1 and 8.\n";
			continue;
		}
		if ((num[0] - '0') > num_contacts)
		{
			std::cout << "There are only " << num_contacts << " contacts.\n";
			continue;
		}
		break;
	}
	contacts[(num[0] - '0') - 1].print_contact_specific();
	std::cout << "\n";
}

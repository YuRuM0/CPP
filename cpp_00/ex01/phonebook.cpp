/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:48:01 by yulpark           #+#    #+#             */
/*   Updated: 2025/07/19 20:22:21 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "=====================================================\n";
	std::cout << "Welcome to the 80s and their unbelievable technology!\n";
	std::cout << "=====================================================\n";

	std::cout << "Rules: \n";
	std::cout << "The PhoneBook stores upto 8 contacts.\n";
	std::cout << "When 9th contact given, the 1st contact will be replaces with the 9th.\n\n";

	std::cout << "Available Commands: \n";
	std::cout << "   ADD: save a new contact\n";
	std::cout << "   SEARCH: dispaly a specific contact\n";
	std::cout << "   EXIT: quits programe\n";

	index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "=====================================================\n";
	std::cout << "Goodbye to the 80s and their unbelievable technology!\n";
	std::cout << "All the contacts are lost forever....\n";
	std::cout << "=====================================================\n";
}

void PhoneBook::ADD(void)
{
	contacts[index % 8].add_contacts();
	index++;
}

void PhoneBook::print_result(void)
{
	std::cout << std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "Phone Number" << "|" << std::endl;
	while (contacts[index].is_filled() == 1)
	{
		contacts[index].print_contact(index);
		index++;
	}
}

void PhoneBook::SEARCH(void)
{
	std::cout << "Write the index of the contact that you want to search: \n";
	int index;
	while (true)
	{
		std::getline(std::cin, index);
		
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:37:16 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/05 18:29:40 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string modified(std::string str, std::string s1, std::string s2)
{
	std::string new_str;
	size_t current = 0;
	size_t prev = 0;

	if (s1 == "\0" || s2 == "\0")
		return (str);
	while ((current = str.find(s1, prev)) != std::string:: npos) // std::string::npos is returned if not found
	{
		new_str.append(str, prev, current - prev);
		new_str.append(s2);
		prev = current +  s1.length();
	}
	new_str.append(str, prev, std::string::npos); //append the rest!
	return (new_str);
}

int main(int ac, char **av)
{
	std::ifstream file;
	std::string str;

	if (ac  != 4)
	{
		std::cout << "Wrong input! This programme requires three parameters: a filename and two strings. \n";
		return (0);
	}
	file.open(av[1], std::ios::in);
	if (file.is_open())
	{
		std::ofstream new_file(std::string(av[1]) + ".replace");
		if (!new_file)
		{
			std::cout << "Failed to create a new file\n";
			return (1);
		}
		 while (std::getline(file, str))
    	{
        	new_file << modified(str, av[2], av[3]);
        	if (!file.eof())
          		new_file << "\n";
		}
		new_file.close();
		file.close();
	}
	else
	{
		std::cout << "Cannot open the file :(\n";
		return (1);
	}
	return (0);
}

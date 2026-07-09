/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:21:34 by ypark             #+#    #+#             */
/*   Updated: 2026/07/05 16:22:53 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		printf("Test 1\n");
		try
		{
			Bureaucrat Johnny("Johnny", 150);
			std::cout << Johnny << std::endl;

			Form Form("Form1", 150, 50);
			std::cout << Form << std::endl;
			Johnny.signForm(Form);
			std::cout << Form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl;
	printf("Test 2\n");
	{
		try
		{
			Bureaucrat Tiago("Tiago", 150);
			std::cout << Tiago << std::endl;
			Form Form2("Form2", 50, 50);
			std::cout << Form2 << std::endl;
			Tiago.signForm(Form2);
			std::cout << Form2 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl;
	printf("Test 3\n");

	{
		try
		{
			Bureaucrat Giulio("Giulio", 150);
			std::cout << Giulio << std::endl;
			Form Form3("Form3", 0, 50); //grade to sign higher than required
			std::cout << Form3 << std::endl;
			Giulio.signForm(Form3);
			std::cout << Form3 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl;
	printf("Test4\n");

	{
		try
		{
			Form Form4("Form4", 10, 151);
			std::cout << Form4 << std::endl;
			std::cout << Form4 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}

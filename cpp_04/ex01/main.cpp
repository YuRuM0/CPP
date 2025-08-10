/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:55:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/10 22:05:26 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *Animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	

	for (int i = 0; i < 10; i++)
		delete Animals[i];
	delete Animals;
}

//int main()
//{
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();

//	delete j;
//	delete i;

//	return 0;
//}

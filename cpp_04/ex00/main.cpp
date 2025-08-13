/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:55:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/13 18:29:18 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Cat* i = new Cat();
	const Cat* k(i);
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete k;
	const WrongAnimal *meta1 = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	std::cout << meta1->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	meta1->makeSound();
	wrongcat->makeSound();
	delete meta1;
	delete wrongcat;
	return 0;
}

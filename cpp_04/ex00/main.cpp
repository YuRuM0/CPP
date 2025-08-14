/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:55:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/14 14:12:55 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Cat i = Cat();
	const Cat k(i);
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i.getType() << " " << std::endl;
	std::cout << k.getType() << " " << std::endl;
	i.makeSound(); //will output the cat sound!
	j->makeSound();
	k.makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	const WrongAnimal *meta1 = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	const WrongCat *wrongcat2 = new WrongCat();
	std::cout << meta1->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << wrongcat2->getType() << " " << std::endl;
	meta1->makeSound();
	wrongcat->makeSound();
	wrongcat2->makeSound();
	delete meta1;
	delete wrongcat;
	delete wrongcat2;
	return 0;
}

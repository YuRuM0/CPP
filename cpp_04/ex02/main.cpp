/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:55:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/14 14:41:08 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *AAnimals[10];

	std::cout << "\n=============================================================================\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Round: " << i + 1 << "\n";
		if (i < 5)
			AAnimals[i] = new Dog();
		else
			AAnimals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Round: " << i + 1 << "\n";
		delete (AAnimals[i]);
	}
	std::cout << "\nCiao Rudy!\n\n";
	Dog *Rudy = new Dog();
	Rudy->makeSound();
	Rudy->getBrain().setIdeas("Rudy's thoughts");
	Rudy->getBrain().print_first10_ideas();
	delete Rudy;
	std::cout << "\n=============================================================================\n";
	// const AAnimal* meta = new AAnimal(); -> not possible
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Cat* k = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
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
	std::cout << "\n=============================================================================\n";
	return (0);
}


//int main() {
//    Brain original;
//    original.ideas[0] = "Original idea";
//    original.ideas[1] = "Another thought";

//    Brain copy = original;

//    original.ideas[0] = "Modified idea";

//    std::cout << "Original[0]: " << original.ideas[0] << "\n";
//    std::cout << "Copy[0]: " << copy.ideas[0] << "\n";

//    if (copy.ideas[0] == "Original idea")
//        std::cout << "Deep copy works!\n";
//    else
//        std::cout << "Shallow copy.....\n";
//}

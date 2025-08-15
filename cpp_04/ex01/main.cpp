/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:55:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/14 18:34:51 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Animal *Animals[10];

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Round: " << i + 1 << "\n";
		if (i < 5)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Round: " << i + 1 << "\n";
		delete (Animals[i]);
	}
	std::cout << "\nCiao Rudy e Lily!\n\n";
	Dog *Rudy = new Dog();
	Dog Lilly(*Rudy);
	Rudy->makeSound();
	Rudy->getBrain().setIdeas("Rudy's thoughts");
	Rudy->getBrain().print_first10_ideas();
	Lilly.makeSound();
	Lilly.getBrain().setIdeas("Lilly's thoughts");
	Lilly.getBrain().print_first10_ideas();
	delete Rudy;
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

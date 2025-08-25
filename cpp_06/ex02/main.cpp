/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:32:23 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/25 15:56:02 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

Base *generate(void)
{
	int random = rand() % 3;

	switch (random)
	{
		case (2):
			return new A();
		case (1):
			return new B();
		case (0):
			return new C();
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) // checks if p points to a A object or inherits from it
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "No type" << std::endl;;
}

/*
As reference can't be null, it cannot return null ptr after casting
-> use exception class
*/
void identify(Base& p)
{
}
		
int main(void)
{
	return (0);
}
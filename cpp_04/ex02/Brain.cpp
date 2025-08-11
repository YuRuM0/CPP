/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:28:11 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/11 18:50:37 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default contructor called\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain: Contructor called\n";
	for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called\n";
}

void Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void Brain::print_first10_ideas()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << this->ideas[i] << std::endl;
	}
}

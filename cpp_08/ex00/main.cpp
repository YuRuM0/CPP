/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:22:52 by ypark             #+#    #+#             */
/*   Updated: 2025/09/08 15:30:22 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()  
{
    std::cout << "Testing with vector ============" << std::endl;
    std::vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(i);
    try
    {
        easyfind(vec, 5);
        easyfind(vec, 12);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Value not in the container" << '\n';
    }
    
    std::cout << "Testing with lst ============" << std::endl;
    std::list<int> lst;
    for (int i = 0; i < 10; i++)
        lst.push_back(i);
    try
    {
        easyfind(lst, 9);
        easyfind(lst, 12);
    }
    catch(const std::exception& e)
    {
        std::cout << "Value not in the container" << '\n';
    }
    return (0);
}
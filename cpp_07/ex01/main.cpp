/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:28:14 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/31 18:12:17 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void inc(int& n)
{
    n += 10;
}

void print_const(const int& n)
{
    std::cout << n << " ";
}


void print_val(std::string s)
{
    std::cout << s << " ";
}


void append_excl(std::string& s)
{
    s += "!";
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    std::cout << "Original arr: ";
    iter(arr, 4, print_const);

    std::cout << "\nIncremented arr: ";
    iter(arr, 4, inc);
    iter(arr, 4, print_const);
    std::cout << std::endl;

    const int c_arr[4] = {10, 20, 30, 40};
    std::cout << "Const array print: ";
    iter(c_arr, 4, print_const);
    std::cout << std::endl;

    std::string words[2] = {"ciao", "tchau"};
    std::cout << "Original: ";
    iter(words, 2, print_val);
    std::cout << "\n!-Appended: ";
    iter(words, 2, append_excl);
    iter(words, 2, print_val);
    std::cout << std::endl;

    const std::string cwords[2] = {"one", "two"};
    std::cout << "Const words print: ";
    iter(cwords, 2, print_val);
    std::cout << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:22:54 by ypark             #+#    #+#             */
/*   Updated: 2025/09/08 15:26:06 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/*
    declares a variable i which is nested type inside T.
    i acts as a ptr to an container, iterates through each element
*/

template <typename T>
void easyfind(T &container, int value)
{
    typename T::iterator i = std::find(container.begin(), container.end(), value);
    if (i == container.end())
        throw std::exception();
    std::cout << "Value found at: " << *i << std::endl;
}
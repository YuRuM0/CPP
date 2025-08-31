/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:28:12 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/31 18:15:44 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

/*
function templates: write generic functions that can work w/ diff data types
*/

template <typename T, typename F>
void iter(T *a, size_t b, F c)
{
	for (int i = 0; i < b; i++)
	{
		c(a[i]);
	}
}

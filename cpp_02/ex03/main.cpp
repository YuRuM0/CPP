/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:39:41 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/03 19:42:21 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point A(0.0f, 1.0f);
	Point B(2.0f, 3.0f);
	Point C(1.0f, 5.0f);
	Point p(0.5f, 0.4f);
	Point p1(1.0f, 2.0f);

	bool res1 = bsp(A, B, C, p);
	bool res2 = bsp(A, B, C, p1);
	if (res1 == true)
		std::cout << "The point is in the triangle.\n";
	else
		std::cout << "The point is not in the triangle\n";
	if (res2 == true)
		std::cout << "The point is in the triangle.\n";
	else
		std::cout << "The point is not in the triangle\n";
	return (0);
}

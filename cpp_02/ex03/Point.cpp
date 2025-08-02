/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:41:02 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/02 21:41:37 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float num1, const float num2) : x(num1), y(num2)
{
}

Point::Point(const Point &pt) : x(pt.x), y(pt.y)
{
}

Point::~Point()
{
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 21:08:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/04 14:13:54 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
#include <cmath>

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(const float num1, const float num2);
		Point(const Point &pt);
		~Point();
		const Fixed getValue(char x) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

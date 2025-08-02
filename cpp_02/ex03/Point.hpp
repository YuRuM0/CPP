/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 21:08:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/02 21:38:32 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
	public:
		Fixed const x;
		Fixed const y;

	private:
		Point();
		Point(const float num1, const float num2);
		Point(const Point &pt);
		~Point();
};

#endif

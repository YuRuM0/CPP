/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 21:11:58 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/03 19:48:42 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed min_pt(Fixed const a, Fixed const b, Fixed const c)
{
	Fixed min_x;

	if (a < b)
		min_x = a;
	else
		min_x = b;
	if (min_x <  c)
		return (min_x);
	return (c);
}

static Fixed max_pt(Fixed const a, Fixed const b, Fixed const c)
{
	Fixed max_x;

	if (a > b)
		max_x = a;
	else
		max_x = b;
	if (max_x >  c)
		return (max_x);
	return (c);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed min_x = min_pt(a.getValue('x'), b.getValue('x'), c.getValue('x'));
	Fixed min_y = min_pt(a.getValue('y'), b.getValue('y'), c.getValue('y'));
	Fixed max_x = max_pt(a.getValue('x'), b.getValue('x'), c.getValue('x'));
	Fixed max_y = max_pt(a.getValue('y'), b.getValue('y'), c.getValue('y'));

	if ((min_x < point.getValue('x') && max_x > point.getValue('x')) && (min_y < point.getValue('y') && max_y > point.getValue('y')))
		return (true);
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:47:04 by yulpark           #+#    #+#             */
/*   Updated: 2026/07/16 21:43:53 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

enum Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
	NONE
};

class ScalarConverter
{
	private:
		// so that they are not instantiable, if not written you get automatically but you want it to override but private so no access
		ScalarConverter() = delete;
		~ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter &obj) = delete;
		ScalarConverter &operator=(const ScalarConverter &obj) = delete;

	public:
		static void convert(const std::string &literal);
};

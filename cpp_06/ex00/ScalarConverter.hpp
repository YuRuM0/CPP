/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:54:55 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/23 18:04:07 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

enum Types
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

class ScalarConverter
{
	public:
		static void convert(std::string literal);
};

bool isChar(const std::string& literal);
bool isFloat(const std::string& literal);
bool isInt(const std::string& literal, int n);
bool isDouble(const std::string& literal);
bool isPseudo(std::string &literal);

#include "ScalarConverter.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:46:12 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/18 19:46:13 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool isChar(std::string &literal)
{
	if (literal.size() == 1 && isdigit(literal[0]) == 0 && isprint(literal[0]) > 0)
		return true;
	return false;
}

bool isInt(std::string &literal, int n)
{
	int i = 0;
	if (literal[0] == '+' || literal[0] == '-')
	{
		if (!isdigit(literal[1]))
			return (false);
		i++;
	}
	while (i < n)
	{
		if (!isdigit(literal[i++]))
			return (false);
	}
	return (true);
}

bool isDouble(const std::string &literal)
{
	int dotCount = 0;

	if (literal[0] != '-' && literal[0] != '+' && !isdigit(literal[0]))
		return false;
	for (int i = 1; i < literal.size(); i++)
	{
		if (literal[i] == '.')
		{
			dotCount++;
			if (dotCount > 1 || i == 0 || i == (literal.size() - 1))
				return (false);
		}
		else if (!isdigit(literal[i]))
			return (false);
	}
	return (dotCount == 1);
}

bool isFloat(std::string &literal)
{
	int len = literal.size();

	if (literal[len - 1] != 'f')
		return false;
	return (isDouble(literal.substr(0, len - 1)));
}


bool isPseudo(std::string &literal)
{
	if (literal == "-inff" || literal == "-inf" ||
		literal == "+inff" || literal == "+inf" ||
		literal == "nan" || literal == "nanf")
		return true;
	return false;
}

static int typeDetector(std::string &literal)
{
	if (isPseudo(literal) == true)
		return (PSEUDO);
	if (isChar(literal) == true)
		return (CHAR);
	if (isFloat(literal) == true)
		return (FLOAT);
	if (isDouble(literal) ==  true)
		return (DOUBLE);
	if (isInt(literal, literal.size()) == true)
		return (INT);
	return (INVALID);
}

static void convertChar(std::string (&output)[4], std::string &literal)
{
// to string is to print, then must cast it
	if (!std::isprint(literal[0]))
		output[CHAR] += "Non-printable";
	else
		output[CHAR] += std::string("'") + literal[0] + "\'";
	output[INT] += std::to_string(literal[0]);
	output[FLOAT] += std::to_string(static_cast<float>(literal[0]));
	output[DOUBLE] += std::to_string(static_cast<double>(literal[0]));
	}

	static void convertInt(std::string (&output)[4], std::string &literal)
{
	//impossible case
	int res;

	try
	{
		res = std::stoi(literal);
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		for (int i = 0; i < 4; i++)
			output[i] += "Impossible";
		return ;
	}
	if (!std::isprint(res))
		output[CHAR] += "Non-printable";
	else if (res > 127 || res < 0)
		output[CHAR] += "Impossible";
	else
		output[CHAR] += "\'" + std::string(1, static_cast<char>(res)) + "\'";  //does it require static_cast?
		output[INT] += std::to_string(static_cast<int>(res));
		output[FLOAT] += std::to_string(static_cast<float>(res));
		output[DOUBLE] += std::to_string(static_cast<double>(res));
}

static void convertFloat(std::string (&output)[4], std::string &literal)
{
	float res;

	try
	{
		res = std::stof(literal);
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		for (int i = 0; i < 4; i++)
			output[i] += "Impossible";
		return ;
	}
	if (std::isprint(static_cast<int>(res)) != 0)
		output[CHAR] += "Non-printable";
	else if (literal[0] > 127)
		output[CHAR] += "Impossible";
	else
		output[CHAR] += "\'" + std::string(1, static_cast<char>(res)) + "\'";  //does it require static_cast?
		output[INT] += std::to_string(static_cast<int>(res));
		output[FLOAT] += std::to_string(static_cast<float>(res));
		output[DOUBLE] += std::to_string(static_cast<double>(res));
}

static void convertDouble(std::string (&output)[4], std::string &literal)
{
	double res;

	try
	{
		res = std::stod(literal);
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		for (int i = 0; i < 4; i++)
			output[i] += "Impossible";
	}
	if (!std::isprint(static_cast<int>(res)))
		output[CHAR] += "Non-printable";
	else if (literal[0] > 127 || literal[0] < 0)
		output[CHAR] += "Impossible";
	else
		output[CHAR] += "\'" + std::string(1, static_cast<char>(res)) + "\'";  //does it require static_cast?
		output[INT] += std::to_string(static_cast<int>(res));
		output[FLOAT] += std::to_string(static_cast<float>(res));
		output[DOUBLE] += std::to_string(res);
	}

static void convertPseudo(std::string (&output)[4], std::string &literal)
{
	output[0] += "impossible";
	output[1] += "impossible";
	if (literal == "-inff" || literal == "-inf")
	{
		output[2] += "-inff";
		output[3] += "-inf";
	}
	else if (literal == "+inff" || literal == "+inf")
	{
		output[2] += "+inff";
		output[3] += "+inf";
	}
	else if (literal == "nan" || literal == "nanf")
	{
		output[2] += "nanf";
		output[3] += "nan";
	}
}

void	string_trimmer(std::string (&output)[4])
{

	for (int i = 2; i < 4; i++)
	{
		std::string content = output[i].substr(output[i].find(": ") + 2);
		if (content.find(".") == std::string::npos)
			continue;
		while (content.back() == '0' && content[content.size() - 2] != '.')
			content.pop_back();
		if (i == 2)
			output[i] = "float: " + content + "f";
		else
			output[i] = "double: " + content;
	}
}

void ScalarConverter::convert(std::string literal)
{
	int i = typeDetector(literal);
	//std::cout << i << std::endl;
	std::string	output[4] = {"char: ", "int: ", "float: ", "double: "};

	switch (i)
	{
		case CHAR:
			convertChar(output, literal);
			break;
		case INT:
			convertInt(output, literal);
			break;
		case FLOAT:
			convertFloat(output, literal);
			break;
		case DOUBLE:
			convertDouble(output, literal);
			break;
		case PSEUDO:
			convertPseudo(output, literal);
			break;
		default:
			for (int j = 0; j < 4; j++)
           		output[j] += "Impossible";
			break;
	}
	string_trimmer(output);
	for (int i = 0; i < 4; i++)
		std::cout << output[i] << std::endl;
}

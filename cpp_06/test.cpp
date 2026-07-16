
#include <iostream>
#include <string.h>


static bool isSpecial(const std::string &literal)
{
	return (literal == "-inff" || literal == "+inff" || literal == "nanf" ||
		 literal == "nan" || literal == "-inf" || literal == "+inf");
}

static bool isChar(const std::string &literal)
{
	return (literal.length() == 1 && !std::isdigit(literal[0]));
}

static bool isInt(const std::string &literal)
{
    if (literal.length() == 1 && literal[0] == '-')
        return (false);
    for (size_t i = 0; i < literal.length(); i++)
    {
        if (i == 0 && literal[i] == '-')
            continue;
        else if (std::isdigit((literal[i])))
            continue;
        else
            return (false);
    }
    return (true);
}

static bool isFloat(const std::string &literal)
{
	int decimal = 0;
	int digits = 0;
    if (literal.length() == 1 && literal[0] == '-')
        return (false);
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (i == 0 && literal[i] == '-')
            continue;
		else if (std::isdigit(literal[i]))
		{
			digits++;
			continue;
		}
		else if (literal[i] == '.')
		{
			if (decimal == 1)
				return (false);
			decimal = 1;
			continue;
		}
		else if (literal[i] == 'f')
      		continue;
		else return (false);
	}
	if (literal[literal.length() - 1] != 'f')
   		return (false);
	if (digits == 0 || decimal != 1)
		return (false);
	return (true);
}

static bool isDouble(const std::string &literal)
{
	int decimal = 0;
	int digits = 0;
    if (literal.length() == 1 && literal[0] == '-')
        return (false);
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (i == 0 && literal[i] == '-')
            continue;
		else if (std::isdigit(literal[i]))
		{
			digits++;
			continue;
		}
		else if (literal[i] == '.')
		{
			if (decimal == 1)
				return (false);
			decimal = 1;
			continue;
		}
		else return (false);
	}
	if (digits == 0 || decimal == 0)
		return (false);
	return (true);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./test <literal>" << std::endl;
        return (1);
    }
    std::string literal = argv[1];

    std::cout << "Input: \"" << literal << "\"" << std::endl;
    std::cout << "isChar:   " << isChar(literal) << std::endl;
    std::cout << "isInt:    " << isInt(literal) << std::endl;
    std::cout << "isFloat:  " << isFloat(literal) << std::endl;
    std::cout << "isDouble: " << isDouble(literal) << std::endl;
    std::cout << "isSpecial:" << isSpecial(literal) << std::endl;

    return (0);
}

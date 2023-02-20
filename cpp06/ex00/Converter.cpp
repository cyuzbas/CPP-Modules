/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 10:13:37 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 13:01:09 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(){}

Converter::Converter(const std::string input): _input(input)
{
	this->_double = atof(_input.c_str());
	this->convertInput();
	this->printOutput();
}

Converter::Converter(const Converter &src): _input(src.getInput())
{
	*this = src;
	this->printOutput();
}

Converter::~Converter(){}

Converter &Converter::operator=(const Converter &src)
{
	if (this == &src)
		return *this;

	this->_type = src.getType();
	this->_char = src.getChar();
	this->_int = src.getInt();
	this->_float = src.getFloat();
	this->_double = src.getDouble();
	return *this;
}

int	Converter::detectType()
{
	if (this->getInput().compare("nan") == 0 || this->getInput().compare("+inf") == 0 ||
		this->getInput().compare("-inf") == 0 || this->getInput().compare("+inff") == 0 ||
		this->getInput().compare("-inff") == 0 || this->getInput().compare("nanf") == 0)
	{
		return (NAN_INF);
	}
	else if (this->getInput().length() == 1 && this->getInput().find_first_of("+-f.") != std::string::npos)
		return (CHAR);
	else if (this->getInput().find_first_of("+-") != this->getInput().find_last_of("+-")) // catches any multiple or mixed use of + and -
		return (ERROR);
	else if (this->getInput().find_first_not_of("+-0123456789") == std::string::npos)
		return (INT);
	else if (this->getInput().find_first_not_of("+-0123456789.") == std::string::npos)
	{
		if (this->getInput().find_first_of(".") != this->getInput().find_last_of(".") || // catches `0..0`
		isdigit(this->getInput()[this->getInput().find_first_of(".") + 1]) == false ) // catches `0.`
			return (ERROR);
		else
			return (DOUBLE);
	}
	else if (this->getInput().find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		if (this->getInput().find_first_of("f") != this->getInput().find_last_of("f") || // catches `0.0ff`
			this->getInput().find_first_of(".") != this->getInput().find_last_of(".") || // catches `0..0f`
			this->getInput().find_first_of("f") - this->getInput().find_first_of(".") == 1 || //catches `0.f`
			this->getInput()[this->getInput().find_first_of("f") + 1] != '\0') // catches `0.0f0`
			return (ERROR);
		else
			return (FLOAT);
	}
	else if (this->getInput().length() == 1 && std::isprint(this->getInput()[0]))
		return (CHAR);
	else
		return (ERROR);
}

void	Converter::convertInput(void)
{
    this->_type = detectType();
    switch (_type)
    {
    case INT:
        fromInt();
        break;
    case FLOAT:
        fromFloat();
        break;
    case DOUBLE:
        fromDouble();
        break;
    case CHAR:
        fromChar();
        break;
	case NAN_INF:
		return;
    default:
        throw Converter::ErrorException();
	}
}

void Converter::fromChar(void)
{
	this->_char = static_cast<unsigned char>(this->getInput()[0]);
	this->_int = static_cast<int>(this->getChar());
	this->_float = static_cast<float>(this->getChar());
	this->_double = static_cast<double>(this->getChar());
}
void Converter::fromInt(void)
{
	this->_int = static_cast<int>(this->getDouble());
	this->_char = static_cast<unsigned char>(this->getInt());
	this->_float = static_cast<float>(this->getDouble());
}
void Converter::fromFloat(void)
{
	this->_float = static_cast<float>(this->getDouble());
	this->_char = static_cast<char>(this->getFloat());
	this->_int = static_cast<int>(this->getFloat());
}
void Converter::fromDouble(void)
{
	this->_char = static_cast<char>(this->getDouble());
	this->_int = static_cast<int>(this->getDouble());
	this->_float = static_cast<float>(this->getDouble());
}

void	Converter::printOutput(void)const
{
	// print char
	if (this->getType() != NAN_INF && this->getDouble() <= UCHAR_MAX && this->getDouble() >= 0)
	{
		if (isprint(this->getChar()))
			std::cout << "char: '" << this->getChar() << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;

	// print int
	if (this->getType() != NAN_INF && this->getDouble() >= std::numeric_limits<int>::min() 
		&& this->getDouble() <= std::numeric_limits<int>::max())
	{
		std::cout << "int: " << this->getInt() << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;

	// print float
	if (this->getType() != NAN_INF)
	{
		std::cout << "float: " << this->getFloat();
		if (this->getFloat() - this->getInt() == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	else
	{
		if (this->getInput() == "nan" || this->getInput() == "nanf")
			std::cout << "float: nanf" << std::endl;
		else if (this->getInput()[0] == '+')
			std::cout << "float: +inff" << std::endl;
		else
			std::cout << "float: -inff" << std::endl;
	}

	// print double
	if (this->getType() != NAN_INF)
	{
		std::cout << "double: " << this->getDouble();
		if (this->getDouble() < std::numeric_limits<int>::min() || this->getDouble() > std::numeric_limits<int>::max() ||
			this->getDouble() - this->getInt() == 0)
		{
			std::cout << ".0" << std::endl;
		}
		else
			std::cout << std::endl;
	}
	else
	{
		if (this->getInput() == "nan" || this->getInput() == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (this->getInput()[0] == '+')
			std::cout << "double: +inf" << std::endl;
		else
			std::cout << "double: -inf" << std::endl;
	}
}

// Getters
std::string	Converter::getInput(void)const {return (this->_input);}

int	Converter::getType(void)const {return (this->_type);}

char	Converter::getChar(void)const {return (this->_char);}

int	Converter::getInt(void)const {return (this->_int);}

float	Converter::getFloat(void)const {return (this->_float);}

double Converter::getDouble(void)const {return (this->_double);}

// Exception
const char *Converter::ErrorException::what(void) const throw()
{
	return ("Error: Invalid argument to convert!");
};
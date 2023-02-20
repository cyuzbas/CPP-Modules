/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 10:13:34 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/17 16:03:57 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <exception>
#include <string>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cctype>

#define GRAY	"\033[30m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define PINK	"\033[35m"
#define CYAN	"\033[36m"
#define RESET	"\033[0m"


#define NAN_INF 1
#define ERROR 2
#define CHAR 3
#define INT 4
#define FLOAT 5
#define DOUBLE 6

class Converter
{
private:

	std::string	_input;
	int			_type;
	char		_char;
	int			_int;
	float		_float;
	double		_double;
	
public:

	//Canonical Form
	Converter();
	Converter(std::string input);
	Converter(const Converter &src);
	~Converter();
	
	Converter &operator=(const Converter &src);
	
	//METHODS
	int detectType(void);
	void convertInput(void);

	void fromChar(void);
	void fromInt(void);
	void fromFloat(void);
	void fromDouble(void);

	void printOutput(void)const;

	//GETTER
	std::string getInput(void)const;
	int getType(void)const;
	char getChar(void)const;
	int getInt(void)const;
	float getFloat(void)const;
	double getDouble(void)const;

	//EXCEPTION
	class ErrorException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
};

#endif
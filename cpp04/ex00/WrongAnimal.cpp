/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 16:31:50 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:14:07 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GRAY << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << GRAY << "[WrongAnimal] String constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	std::cout << GRAY << "[WrongAnimal] Copy Constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << GRAY << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &src )
{
	std::cout << GRAY << "[WrongAnimal] Copy Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

std::string WrongAnimal::getType( void )const
{
	return this->_type;
}

void WrongAnimal::makeSound()const
{
	std::cout << YELLOW << "Confused Wrong Animal Sound!" << std::endl;
}
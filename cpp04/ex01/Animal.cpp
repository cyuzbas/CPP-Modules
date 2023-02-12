/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:42:21 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/12 20:33:21 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GRAY << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GRAY << "[Animal] String constructor called" << std::endl;
}

Animal::Animal( Animal const &src )
{
	std::cout << GRAY << "[Animal] Copy Constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << GRAY << "[Animal] Destructor called" << std::endl;
}

Animal &Animal::operator=( Animal const &src )
{
	std::cout << GRAY << "[Animal] Copy Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

std::string Animal::getType( void )const
{
	return this->_type;
}

void Animal::makeSound()const
{
	std::cout << YELLOW << "Confused Animal Sound!" << std::endl;
}
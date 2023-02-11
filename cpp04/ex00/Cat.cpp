/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:11 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/11 17:05:40 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << GRAY << "[Cat] Default constructor called" << std::endl;
}

Cat::Cat( Cat const &src )
{
	std::cout << GRAY << "[Cat] Copy Constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << GRAY << "[Cat] Destructor called" << std::endl;
}

Cat &Cat::operator=( Cat const &src )
{
	std::cout << GRAY << "[Cat] Copy Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << YELLOW << "Meeoww!" << std::endl;
}
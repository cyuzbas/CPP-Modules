/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:14 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:13:02 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << GRAY << "[Dog] Default constructor called" << std::endl;
}

Dog::Dog( Dog const &src )
{
	std::cout << GRAY << "[Dog] Copy Constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << GRAY << "[Dog] Destructor called" << std::endl;
}

Dog &Dog::operator=( Dog const &src )
{
	std::cout << GRAY << "[Dog] Copy Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Dog::makeSound()const
{
	std::cout << YELLOW << "Woof woof!" << std::endl;
}
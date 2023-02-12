/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:14 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/12 21:20:28 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << GRAY << "[Dog] Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( Dog const &src )
{
	std::cout << GRAY << "[Dog] Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	std::cout << GRAY << "[Dog] Destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=( Dog const &src )
{
	std::cout << GRAY << "[Dog] Copy Assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_type = src._type;
	*(this->_brain) = *(src._brain);
	return *this;
}

void Dog::makeSound()const
{
	std::cout << YELLOW << "Woof woof!" << std::endl;
}

Brain	*Dog::getBrain() const 
{	
	return this->_brain; 
}

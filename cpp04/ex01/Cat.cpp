/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:11 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/13 12:54:35 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << YELLOW << "[Cat] Default constructor called" << std::endl;
	this->_brain = new Brain();
}

// initialize brain with brain copyconstructor
Cat::Cat( Cat const &src )
{
	std::cout << YELLOW << "[Cat] Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	std::cout << YELLOW << "[Cat] Destructor called" << std::endl;
	delete _brain;
}

//overwrite current allocated memory with brain assignment operator.
Cat &Cat::operator=( Cat const &src )
{
	std::cout << YELLOW << "[Cat] Copy Assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_type = src._type;
	*(this->_brain) = *(src._brain); 
	return *this;
}

void Cat::makeSound()const
{
	std::cout << YELLOW << "Meeoww!" << std::endl;
}

Brain	*Cat::getBrain() const 
{	
	return this->_brain; 
}

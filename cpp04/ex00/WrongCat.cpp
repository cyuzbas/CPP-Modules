/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 16:31:44 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:07:34 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << GRAY << "[WrongCat] Default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &src )
{
	std::cout << GRAY << "[WrongCat] Copy Constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << GRAY << "[WrongCat] Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const &src )
{
	std::cout << GRAY << "[WrongCat] Copy Assignment operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void WrongCat::makeSound()const
{
	std::cout << YELLOW << "Wrong Meeoww!" << std::endl;
}
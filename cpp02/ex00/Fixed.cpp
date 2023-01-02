/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 20:02:59 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/02 17:47:01 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_nFractBits = 8;

Fixed::Fixed( void ) : _fpValue(0){
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ){
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Fixed &Fixed::operator=( Fixed const & src ){
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_fpValue = src.getRawBits();
	return *this;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpValue);
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "getRawBits member function called" << std::endl;
	this->_fpValue = raw;
}

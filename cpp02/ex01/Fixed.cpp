/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 20:02:59 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/02 23:07:37 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_nFractBits = 8;

Fixed::Fixed( void ) : _fpValue(0){
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int fpValue ) : _fpValue(fpValue * (1 << _nFractBits)){
	std::cout << "Int Constructor called" << std::endl;
	return;
}

/* The round functions return the integral value nearest to x rounding half-way 
cases away from zero, regardless of the current rounding direction.*/
Fixed::Fixed( const float fpValue ) : _fpValue(roundf(fpValue * (1 << _nFractBits))){
	std::cout << "Float Constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ){
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=( Fixed const & src ){
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_fpValue = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const{
	return (this->_fpValue);
}

void	Fixed::setRawBits( int const raw ){
	this->_fpValue = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)this->_fpValue / (1 << this->_nFractBits));
}

int		Fixed::toInt( void ) const{
	return ((int)this->_fpValue / (1 << this->_nFractBits));
}

std::ostream & operator<<(std::ostream &o, Fixed const &instance){
	o << instance.toFloat();
	return o;
}

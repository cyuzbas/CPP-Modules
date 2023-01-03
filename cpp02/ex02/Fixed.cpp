/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 20:02:59 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/03 22:50:43 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_nFractBits = 8;

/* --------------- Constructors ---------------*/

Fixed::Fixed( void ) : _fpValue(0){
	// std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int fpValue ) : _fpValue(fpValue * (1 << _nFractBits)){
	// std::cout << "Int Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const float fpValue ) : _fpValue(roundf(fpValue * (1 << _nFractBits))){
	// std::cout << "Float Constructor called" <<  std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ){
	// std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}


/* --------------- Destructor ---------------*/

Fixed::~Fixed( void ){
	// std::cout << "Destructor called" << std::endl;
	return;
}


/* ---------- Operator Overload Functions ---------- */

Fixed &Fixed::operator=( Fixed const & src ){
	// std::cout << "Copy Assignment operator called" << std::endl;
	this->_fpValue = src.getRawBits();
	return *this;
}


/* ----- Comparison Operator Overload Functions ----- */

bool Fixed::operator>( Fixed const &src )const{
	return (this->_fpValue > src.getRawBits());
}

bool Fixed::operator<( Fixed const &src )const{
	return (this->_fpValue < src.getRawBits());
}

bool Fixed::operator>=( Fixed const &src )const{
	return (this->_fpValue >= src.getRawBits());
}

bool Fixed::operator<=( Fixed const &src )const{
	return (this->_fpValue <= src.getRawBits());
}

bool Fixed::operator==( Fixed const &src )const{
	return (this->_fpValue == src.getRawBits());
}

bool Fixed::operator!=( Fixed const &src ) const{
	return (this->_fpValue != src.getRawBits());
}


/* ----- Arithmetic Operator Overload Functions ----- */

Fixed Fixed::operator+( Fixed const &src )const{
	return (this->toFloat()  + src.toFloat());
}

Fixed Fixed::operator-( Fixed const &src )const{
	return (this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*( Fixed const &src )const{
	return (this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/( Fixed const &src )const{
	return (this->toFloat() / src.toFloat());
}


/* ----- Increment / Decrement Overload Functions ----- */

//pre
Fixed &Fixed::operator++( void ){
	this->_fpValue++;
	return *this;
}

Fixed &Fixed::operator--( void ){
	this->_fpValue--;
	return *this;
}

//post
Fixed Fixed::operator++( int ){
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed Fixed::operator--( int ){
	Fixed old = *this;
	operator--();
	return (old);
}


/* ------------ Static Member Functions ------------ */

Fixed &Fixed::min(Fixed &n1, Fixed &n2){
	if (n1 .toFloat()< n2.toFloat())
		return n1;
	return n2;
}

const Fixed &Fixed::min(Fixed const &n1, Fixed const &n2){
	if (n1.toFloat() < n2.toFloat())
		return n1;
	return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2){
	if (n1.toFloat() > n2.toFloat())
		return n1;
	return n2;
}

const Fixed &Fixed::max(Fixed const &n1, const Fixed &n2){
	if (n1.toFloat() > n2.toFloat())
		return n1;
	return n2;
}

/* --------------- Member Functions --------------- */

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


/* --------------- Non-Member Functions --------------- */

std::ostream & operator<<(std::ostream &o, Fixed const &instance){
	o << instance.toFloat();
	return o;
}

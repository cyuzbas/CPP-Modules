/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 08:34:12 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/04 13:17:33 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0){
	return;
}

Point::Point( float const x, float const y ) : _x(x), _y(y){
	return;
}

Point::Point( Point const & src ){
	this->setX(src.getX());
	this->setY(src.getY());
	return;
}

Point::~Point( void ){
	return;
}

Point &Point::operator=( Point const &src ) {
    this->setX(src.getX());
	this->setY(src.getY());
    return *this;
}

Fixed const &Point::getX() const {
	return (this->_x);
}

Fixed const &Point::getY() const {
	return (this->_y);
}

std::ostream	&operator<<(std::ostream &o, Point const i)
{
	o << "_x: " << i.getX() << " / _y: " << i.getY() << std::endl;
	return (o);
}

void Point::setX( Fixed const &x ) {
	const_cast<Fixed &>(this->_x) = x.toFloat();
}

void Point::setY( Fixed const &y ) {
	const_cast<Fixed &>(this->_y) = y.toFloat();
}





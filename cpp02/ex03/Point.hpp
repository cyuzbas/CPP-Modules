/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 08:33:57 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/04 12:30:24 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	
private:
	
	Fixed const	_x;
	Fixed const	_y;

public:

	Point( void );
	Point( float const x, float const y );
	Point( Point const & src );
	~Point( void );

	Point &operator=( Point const &src );

	Fixed const	&getX( void ) const;
	Fixed const &getY( void ) const;
	void  setX( Fixed const &x);
    void  setY( Fixed const &y);
};

std::ostream	&operator<<(std::ostream &o, Point const i);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 20:00:43 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/02 22:48:37 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

class Fixed{
	
private:
	
	int					_fpValue;
	static const int	_nFractBits;

public:

	Fixed( void );							//Canonical - default constructor
	Fixed( const int fpValue );
	Fixed( const float fpValue );
	Fixed( Fixed const & src );				//Canonical - copy constructor
	~Fixed( void );							//Canonical - Destructor

	Fixed &operator=( Fixed const &src );	//Canonical - copy assignment operator
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
};

std::ostream & operator<<(std::ostream &o, Fixed const &instance);

#endif
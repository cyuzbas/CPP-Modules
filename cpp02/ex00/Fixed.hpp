/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 20:00:43 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/02 17:29:31 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
	Fixed( Fixed const & src );			//Canonical - copy constructor
	Fixed &operator=( const Fixed &src );	//Canonical - copy assignment operator
	~Fixed( void );							//Canonical - Destructor

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
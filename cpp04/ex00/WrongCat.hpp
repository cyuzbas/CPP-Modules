/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 16:31:47 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:07:15 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	WrongCat( void );
	WrongCat( WrongCat const &src );
	~WrongCat( void );
	
	WrongCat &operator=( WrongCat const &src );
	
	void makeSound( void )const;
	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:17 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 16:59:46 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
protected:

	
public:

	Dog( void );
	Dog( Dog const &src );
	~Dog( void );
	
	Dog &operator=( Dog const &src );
	
	void makeSound( void )const;
	
};

#endif
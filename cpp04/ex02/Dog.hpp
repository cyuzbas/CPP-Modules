/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:17 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/11 16:54:38 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:

	Brain *_brain;
	
public:

	Dog( void );
	Dog( Dog const &src );
	~Dog( void );
	
	Dog &operator=( Dog const &src );
	
	void makeSound( void )const;
	Brain	*getBrain( void ) const;
	
};

#endif
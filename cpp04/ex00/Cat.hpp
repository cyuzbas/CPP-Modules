/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:43:08 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:11:25 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:

	Cat( void );
	Cat( Cat const &src );
	~Cat( void );
	
	Cat &operator=( Cat const &src );
	
	void makeSound( void )const;
	
};

#endif
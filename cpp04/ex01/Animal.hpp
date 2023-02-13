/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:42:19 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/13 13:34:20 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define GRAY	"\033[30m"
#define RED  	"\033[1;31m"
#define GREEN 	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define PINK	"\033[35m"
#define CYAN	"\033[36m"
#define RESET	"\033[0m"

class Animal
{
protected:

	std::string	_type;
	
public:

	Animal( void );
	Animal( std::string type );
	Animal( Animal const &src );
	virtual ~Animal( void ); 
	
	Animal &operator=( Animal const &src );
	
	std::string getType( void )const;

	virtual void makeSound( void )const;
};

#endif

/* Note: When a derived class object is deleted through a pointer 
to the base class, only the base class destructor is called by default.
If the base class destructor is not declared as virtual, this can lead 
to undefined behavior or memory leaks, especially if the derived class 
has allocated memory dynamically in its own implementation.

A virtual destructor can solve this issue by ensuring that the correct 
destructor is called, regardless of the type of pointer used to delete 
the object. The virtual keyword in the declaration of the destructor 
makes the behavior of the destructor polymorphic, so that the appropriate 
destructor is called based on the actual type of the object being deleted, 
rather than the type of the pointer used to delete it.

In general, it is a good practice to declare a virtual destructor in any 
base class that has virtual functions, even if it does not allocate any 
resources dynamically, to ensure that the behavior of the derived class 
objects is well-defined when they are deleted.*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/28 14:38:32 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 15:21:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define GRAY	"\033[30m"
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class Zombie {

private:

	std::string	_name;

public:

	Zombie( std::string newName );
	~Zombie( void );

	void	announce( void ) const;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
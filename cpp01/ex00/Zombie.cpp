/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/28 14:38:29 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 15:45:29 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newName) : _name(newName){
	std::cout << BLUE << _name << " is aliveeee!";
	std::cout << RESET << std::endl;
};

Zombie::~Zombie( void ){
	std::cout << RED << "No moar brainzZ for ";
	std::cout << _name << RESET << std::endl;
}

void Zombie::announce( void ) const{
	std::cout << GRAY << _name << ": BraiiiiiiinnnzzzZ...";
	std::cout << RESET << std::endl;
}

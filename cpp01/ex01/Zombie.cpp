/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 15:41:56 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 16:08:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){
	std::cout << BLUE << "Horde is coming!";
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

void	Zombie::setName(std::string name){
	this->_name = name;
}
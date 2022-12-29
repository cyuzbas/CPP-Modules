/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:14:23 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 21:38:49 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string	name ) : _name(name), _weapon(nullptr){
	std::cout << BLUE<< this->_name << " is ready for fight!";
	std::cout << RESET << std::endl;
	return;
}

HumanB::~HumanB( void ){
	std::cout << RED << this->_name << " has died!";
	std::cout << RESET << std::endl;
	return;
}

void	HumanB::attack( void ) const{
	std::cout << GRAY << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << RESET << std::endl; 
}

void	HumanB::setWeapon( Weapon &weapon ){
	this->_weapon = &weapon;
}

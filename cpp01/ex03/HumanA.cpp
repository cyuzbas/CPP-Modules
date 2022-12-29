/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:14:17 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 21:39:14 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string	name, Weapon &weapon ) : _name(name), _weapon(weapon){
	std::cout << BLUE << this->_name << " is ready for fight!";
	std::cout << RESET << std::endl;
	return;
}

HumanA::~HumanA( void ){
	std::cout << RED << this->_name << " has died!";
	std::cout << RESET << std::endl;
	return;
}

void	HumanA::attack( void ) const{
	std::cout << GRAY << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType() << RESET << std::endl; 
}
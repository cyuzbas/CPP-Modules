/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:14:31 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 21:28:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string &type ) : _type(type){
	return;
}

Weapon::Weapon( void ){
	_type = "hands";
	return;
}

Weapon::~Weapon( void ){
	return;
}

std::string	Weapon::getType( void ) const{
	return this->_type;
}

void	Weapon::setType( const std::string &type ){
	this->_type = type;
}

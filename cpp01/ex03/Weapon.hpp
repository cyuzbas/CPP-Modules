/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:14:33 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 21:36:49 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define GRAY	"\033[30m"
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class Weapon {

private:

	std::string	_type;

public:

	Weapon( const std::string &type );
	Weapon( void );
	~Weapon( void );

	std::string	getType( void ) const;
	void		setType( const std::string &type );
	
};

#endif
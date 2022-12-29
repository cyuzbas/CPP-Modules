/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:14:25 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 21:19:01 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

private:

	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string	name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );
	
	
};

#endif
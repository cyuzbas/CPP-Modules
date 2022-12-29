/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 20:14:20 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 21:18:12 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:

	std::string	_name;
	Weapon		&_weapon;

public:

	HumanA( std::string	name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;
	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 15:41:07 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 16:40:16 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:

	std::string		_name;
	
public:

	DiamondTrap( void );
	DiamondTrap( std::string const name );
	DiamondTrap( DiamondTrap const &src );
	~DiamondTrap( void );
	
	DiamondTrap &operator=(DiamondTrap const &src);
	
	void	attack( const std::string &target );
	void	whoAmI( void );
};


#endif
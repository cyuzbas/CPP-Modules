/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 17:02:32 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 17:56:09 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
private:

	bool _guardingGate;

public:
	
	ScavTrap( void );
	ScavTrap( std::string const name);
	ScavTrap( ScavTrap const & src);
	~ScavTrap( void );

	ScavTrap &operator=( ScavTrap const &src );
	
	void	attack( const std::string &target );
	void	guardGate( void );
};

#endif
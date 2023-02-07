/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 17:02:32 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/06 18:18:45 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
private:
	bool _guardingGate;
public:
	
	ScavTrap( void );
	ScavTrap( std::string const name);
	ScavTrap( ScavTrap const & src);
	~ScavTrap( void );

	ScavTrap &operator=( ScavTrap const &src );
	
	void guardGate( void );
};

#endif
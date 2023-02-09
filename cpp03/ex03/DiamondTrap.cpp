/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 15:41:10 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 17:52:07 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << GRAY << "[DiamondTrap] Default constructor called" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string const name ) : ClapTrap(name + "_clap_name"),\
	ScavTrap(ClapTrap::_name), FragTrap(ClapTrap::_name), _name(name)
{
	std::cout << GRAY << "[DiamondTrap] String constructor called" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src )
{
	std::cout << GRAY << "[DiamondTrap] Copy constructor called" << RESET << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << GRAY << "[DiamondTrap] Destructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << GRAY << "[DiamondTrap] Copy assignment operator called" << RESET << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void DiamondTrap::attack( const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << CYAN <<"My [DiamondTrap] name is: " << _name \
	<< " & my [ClapTrap] name is: " << ClapTrap::_name << std::endl;
}
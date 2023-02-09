/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 17:02:27 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 17:04:14 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << GRAY << "[ScavTrap] Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardingGate = false;
}

ScavTrap::ScavTrap( std::string const name): ClapTrap(name){
	std::cout << GRAY << "[ScavTrap] String constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardingGate = false;
}

ScavTrap::ScavTrap( ScavTrap const & src){
	std::cout << GRAY << "[ScavTrap] Copy Constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(){
	std::cout << GRAY << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &src ){
	std::cout << GRAY << "[ScavTrap] Copy Assignment operator called" << std::endl;
	ClapTrap::operator=(src);
    return *this;
}

void ScavTrap::attack(const std::string &target){
	if (this->_hitPoints && this->_energyPoints){
		this->_energyPoints--;
		std::cout << GREEN << "ATTACK	[ScavTrap] " << this->_name
		<< " attacks " << target << ", causing '" << this->_attackDamage
		<< "' points of damage!" << " (LEFT HP: "<< this->_hitPoints << ")"
		<< " (LEFT EP: "<< this->_energyPoints<< ")" << std::endl;
	} else {
		std::cout << YELLOW << "ATTACK	WARNING! "
		<< this->_name << " is unable to attack due to";
		if (!this->_energyPoints)
			std::cout << " insufficent energy points!!" << std::endl;
		else
			std::cout << " his DEATH!!" << std::endl;
	}
}

void ScavTrap::guardGate( void ){
	if (this->_guardingGate == false){
		this->_guardingGate = true;
		std::cout << CYAN << "GATE	[ScavTrap] " << this->_name
		<< " is now in gate keeper mode." << std::endl;
	}else{
		std::cout << CYAN << "GATE	[ScavTrap] " << this->_name 
		<< " is already guarding the gate." << std::endl;
	}
}

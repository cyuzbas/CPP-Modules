/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 14:00:28 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/07 18:10:12 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), \
	_hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << GRAY << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), \
	_hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << GRAY << "String constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ){
	std::cout << GRAY << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ){
	std::cout << GRAY << "Copy Constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &src ){
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->_hitPoints && this->_energyPoints){
		this->_energyPoints--;
		std::cout << GREEN << "ClapTrap " << this->_name
		<< " attacks " << target << ", causing '" << this->_attackDamage
		<< "' points of damage!" << " (LEFT HP: "<< this->_hitPoints << ")"
		<< " (LEFT EP: "<< this->_energyPoints<< ")" << std::endl;
	} else {
		std::cout << YELLOW << "WARNING! ClapTrap "
		<< this->_name << " is unable to attack due to";
		if (!this->_energyPoints)
			std::cout << " insufficent energy points!!" << std::endl;
		else
			std::cout << " his DEATH!!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints && this->_energyPoints){
		if (amount >= this->_hitPoints)
			amount = this->_hitPoints;
		this->_hitPoints -= amount;
		std::cout << RED << "ClapTrap " << this->_name << " got attacked, " << 
		"and lost '" << amount << "' hit points! (LEFT HP: " << this->_hitPoints
		<< ")" << " (LEFT EP: " << this->_energyPoints << ")" << std::endl;
	} else {
		std::cout << YELLOW << "WARNING! ClapTrap " << this->_name << 
		" is unable to get attacked due to ";
		if (!this->_energyPoints)
			std::cout << "insufficent energy points!!" <<  std::endl;
		else
			std::cout << "his DEATH!!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints && this->_energyPoints){
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << BLUE << "ClapTrap " << this->_name 
		<< " found a healing potion and gained '" << amount
		<< "' hit points! (LEFT HP: " << this->_hitPoints << ")" 
		<< " (LEFT EP: " << this->_energyPoints << " )" << std::endl;
	} else {
		std::cout << YELLOW << "WARNING! ClapTrap " << 
		this->_name << " is unable to heal due to ";
		if (!this->_energyPoints)
			std::cout << "insufficent energy points!!"  << std::endl;
		else
			std::cout << "his DEATH!!"  << std::endl;
	}
}

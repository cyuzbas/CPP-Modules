/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:27:50 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 17:16:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << GRAY << "[FragTrap] Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_highFivesGuys = false;
}

FragTrap::FragTrap( std::string const name) : ClapTrap(name){
	std::cout << GRAY << "[FragTrap] String constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_highFivesGuys = false;
}

FragTrap::FragTrap( FragTrap const & src){
	std::cout << GRAY << "[FragTrap] Copy Constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(){
	std::cout << GRAY << "[FragTrap] Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &src ){
	std::cout << "[FragTrap] Copy Assignment operator called" << std::endl;
	ClapTrap::operator=(src);
    return *this;
}

void FragTrap::attack(const std::string &target){
	if (this->_hitPoints && this->_energyPoints){
		this->_energyPoints--;
		std::cout << GREEN << "ATTACK	[FragTrap] " << this->_name
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

void FragTrap::highFivesGuys( void ){
	if (this->_highFivesGuys == false){
		this->_highFivesGuys = true;
		std::cout << CYAN << "HIFIVE	[FragTrap] " << this->_name
		<< " is now requesting a HIGH FIVE from you." << std::endl;
	}else{
		std::cout << CYAN << "HIFIVE	[FragTrap] " << this->_name 
		<< " has already requested a HIGH FIVE, can you give one already!" << std::endl;
	}
}
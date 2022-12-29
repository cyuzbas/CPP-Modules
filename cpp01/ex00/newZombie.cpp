/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/28 14:38:19 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 15:23:41 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	
	Zombie* zombie = new Zombie(name);
	
	if(!zombie)
		std::cout << "Allocation failed!" << std::endl;

	return zombie;
}
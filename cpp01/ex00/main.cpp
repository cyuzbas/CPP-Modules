/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/28 14:37:57 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 16:14:10 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	
	Zombie* zombie = newZombie("DynamicZombie");
	if (zombie == NULL)
		return (1);
	zombie->announce();
	delete zombie;
	randomChump("StackZombie");
	return (0);
}
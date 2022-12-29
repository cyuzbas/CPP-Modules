/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 15:41:49 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 16:15:22 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	
	if (N < 1)
	{
		std::cout << "Horde needs moarr Zombies" << std::endl;
		return (NULL);
	}
	
	Zombie* horde = new Zombie[N];
	
	if(!horde)
		std::cout << "Allocation failed!" << std::endl;
	else
		for (int i = 0; i < N; i++)
			horde[i].setName(name);

	return (horde);
}
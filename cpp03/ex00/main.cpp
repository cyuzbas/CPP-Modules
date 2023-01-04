/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 14:00:22 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/04 22:30:55 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a;
	ClapTrap b("R2-D2");

	a.attack("C-3PO");
	a.takeDamage(15);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Some Droid");
	b.beRepaired(3);
	b.beRepaired(5);
	for (int i = 0; i < 10; i++)
		b.attack("BB-8");
	b.beRepaired(3);

	return 0;
}
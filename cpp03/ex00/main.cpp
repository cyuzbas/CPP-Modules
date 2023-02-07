/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 14:00:22 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/07 16:31:05 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char **argv) {
  (void)argv;
  if (argc != 1)
    exit(EXIT_FAILURE);
{
	std::cout << std::endl;
	std::cout << PINK << "[ TEST_ClapTrap : Default constructor & Destructor ]" << std::endl;
	ClapTrap robot;
}
{
	std::cout << std::endl;
	std::cout << PINK << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
	ClapTrap robot("Clap");
}
{
	std::cout << std::endl;
	std::cout << PINK << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
	ClapTrap robot1;
	ClapTrap robot(robot1);
}
{
	std::cout << std::endl;
	std::cout << PINK << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
	ClapTrap robot1("Clap");
	ClapTrap robot2("Trap");
	robot1.attack("Trap");
	robot2.takeDamage(0);
	robot2.beRepaired(0);
}
{
	std::cout << std::endl;
	std::cout << PINK << "[ TEST_ClapTrap : Attack & Take damage & Die & Be repaired & Finished Energy ]" << std::endl;
	ClapTrap robot1;
	ClapTrap robot2("R2-D2");

	robot1.attack("C-3PO");
	robot1.takeDamage(15);
	robot1.takeDamage(10);
	robot1.beRepaired(5);
	robot1.attack("Some Droid");
	robot2.beRepaired(3);
	robot2.beRepaired(5);
	for (int i = 0; i < 10; i++)
		robot2.attack("BB-8");
	robot2.beRepaired(3);
}
  std::cout << std::endl;
  return (0);
}
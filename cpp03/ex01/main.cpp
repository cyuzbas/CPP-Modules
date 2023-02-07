/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 14:00:22 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/07 18:22:21 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// int main(int argc, char **argv) {
//   (void)argv;
//   if (argc != 1)
//     exit(EXIT_FAILURE);
// {
// 	std::cout << std::endl;
// 	std::cout << PINK << "[ TEST_ClapTrap : Default constructor & Destructor ]" << std::endl;
// 	ClapTrap robot;
// }
// {
// 	std::cout << std::endl;
// 	std::cout << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
// 	ClapTrap robot("Clap");
// }
// {
// 	std::cout << std::endl;
// 	std::cout << PINK << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
// 	ClapTrap robot1;
// 	ClapTrap robot(robot1);
// }
// {
// 	std::cout << std::endl;
// 	std::cout << PINK << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
// 	ClapTrap robot1("Clap");
// 	ClapTrap robot2("Trap");
// 	robot1.attack("Trap");
// 	robot2.takeDamage(0);
// 	robot2.beRepaired(0);
// }
// {
// 	std::cout << std::endl;
// 	std::cout << PINK << "[ TEST_ClapTrap : Attack & Take damage & Die & Be repaired & Finished Energy ]" << std::endl;
// 	ClapTrap robot1;
// 	ClapTrap robot2("R2-D2");

// 	robot1.attack("C-3PO");
// 	robot1.takeDamage(15);
// 	robot1.takeDamage(10);
// 	robot1.beRepaired(5);
// 	robot1.attack("Some Droid");
// 	robot2.beRepaired(3);
// 	robot2.beRepaired(5);
// 	for (int i = 0; i < 10; i++)
// 		robot2.attack("BB-8");
// 	robot2.beRepaired(3);
// }
//   std::cout << std::endl;
//   return (0);
// }

// int main()
// {
// 	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		ClapTrap a;
// 		ClapTrap b("Cody");

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		a.attack("some other robot");
// 		a.takeDamage(10);
// 		a.takeDamage(10);
// 		a.beRepaired(5);
// 		a.attack("some other other robot");
// 		b.beRepaired(3);
// 		for (int i = 0; i < 12; i++)
// 			b.attack("Cody-clone");
// 		b.beRepaired(3);
// 		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	}
// 	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		ScavTrap c;
// 		ScavTrap d("Savage");

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		c.attack("CloneTrap");
// 		// for (int i = 0; i < 50; i++)
// 		// 	c.attack("CloneTrap");
// 		c.beRepaired(22);
// 		c.takeDamage(21);
// 		c.beRepaired(22);
// 		c.guardGate();
// 		c.guardGate();
// 		d.attack("Savage-clone");
// 		d.takeDamage(101);
// 		d.takeDamage(15);
// 		d.attack("ScavTrap-clone");
// 		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	}
// 	return (0);
// }

int main(int argc, char **argv) {
  (void)argv;
  if (argc != 1)
    exit(EXIT_FAILURE);
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Default constructor & Destructor ]" << RESET << std::endl;
  ClapTrap robot;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Default constructor & Destructor ]" << RESET << std::endl;
  ScavTrap robot;
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
  ClapTrap robot("Clap");
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Name constructor & Destructor ]" << std::endl;
  ScavTrap robot("Scav");
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  ClapTrap robot1;
  ClapTrap robot(robot1);
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  ScavTrap robot1;
  ScavTrap robot(robot1);
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");
  robot1.attack("Trap");
  robot2.takeDamage(0);
  robot2.beRepaired(0);
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
  ScavTrap robot1("Scav");
  ScavTrap robot2("Trap");
  robot1.attack("Trap");
  robot2.takeDamage(0);
  robot2.beRepaired(0);
  robot1.guardGate();
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("C-Trap");
  for (int i = 0; i < 3; i++) {
    robot1.attack("C-Trap");
    robot2.takeDamage(5);
    robot2.beRepaired(2);
  }
}
{
  std::cout << std::endl;
  std::cout << GREEN << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  ScavTrap robot1("Scav");
  ScavTrap robot2("S-Trap");
  for (int i = 0; i < 3; i++) {
    robot1.attack("S-Trap");
    robot2.takeDamage(35);
    robot2.beRepaired(2);
    robot1.guardGate();
  }
}
  std::cout << std::endl;
}


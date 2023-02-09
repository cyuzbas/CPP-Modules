/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 14:00:22 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 17:25:17 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(int argc, char **argv) {
  (void)argv;
  if (argc != 1)
    exit(EXIT_FAILURE);

{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_ClapTrap : Default constructor & Destructor ]" << RESET << std::endl;
  ClapTrap robot;
}
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_ScavTrap : Default constructor & Destructor ]" << RESET << std::endl;
  ScavTrap robot;
}
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_FragTrap : Default constructor & Destructor ]" << RESET << std::endl;
  FragTrap robot;
}
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_DiamondTrap : Default constructor & Destructor ]" << RESET << std::endl;
  DiamondTrap robot;
}
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
//   ClapTrap robot("Clap");
// }
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_ScavTrap : Name constructor & Destructor ]" << std::endl;
//   ScavTrap robot("Scav");
// }
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_FragTrap : Name constructor & Destructor ]" << std::endl;
//   FragTrap robot("Frag");
// }
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_DiamondTrap : Name constructor & Destructor ]" << std::endl;
  DiamondTrap robot("Diamond");
}
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
//   ClapTrap robot1;
//   ClapTrap robot(robot1);
// }
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_ScavTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
//   ScavTrap robot1;
//   ScavTrap robot(robot1);
// }
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_FragTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
//   FragTrap robot1;
//   FragTrap robot(robot1);
// }
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_DiamondTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  DiamondTrap robot1;
  DiamondTrap robot(robot1);
}
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");
  for (int i = 0; i < 3; i++) {
    robot1.attack("Trap");
    robot2.takeDamage(5);
    robot2.beRepaired(2);
  }
}
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x3]" << std::endl;
//   ScavTrap robot1("Scav");
//   ScavTrap robot2("Trap");
//   for (int i = 0; i < 3; i++) {
//     robot1.attack("Trap");
//     robot2.takeDamage(35);
//     robot2.beRepaired(2);
//     robot1.guardGate();
//   }
// }
// {
//   std::cout << std::endl;
//   std::cout << PINK << "[ TEST_FragTrap : Attack & Take damage & Be repaired x3]" << std::endl;
//   FragTrap robot1("Frag");
//   FragTrap robot2("Trap");
//   for (int i = 0; i < 3; i++) {
//     robot1.attack("Trap");
//     robot2.takeDamage(30);
//     robot2.beRepaired(2);
//     robot1.highFivesGuys();
//   }
// }
{
  std::cout << std::endl;
  std::cout << PINK << "[ TEST_DiamondTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  DiamondTrap robot1("Diamond");
  DiamondTrap robot2("Trap");
  for (int i = 0; i < 3; i++) {
    robot1.attack("Trap");
    robot2.takeDamage(5);
    robot2.beRepaired(2);
    robot1.whoAmI();
  }
}
  std::cout << std::endl;
}

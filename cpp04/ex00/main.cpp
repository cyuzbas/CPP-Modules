/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:42:24 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:33:35 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
std::cout << RED << "TESTS FROM SUBJECT" << std::endl;
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << BLUE << j->getType() << " " << std::endl;
	std::cout << BLUE << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}
std::cout << RED << "---------------------------------------------------" << std::endl;
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << BLUE << meta->getType() << " " << std::endl;
	std::cout << BLUE << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete i;
}
	//test from subject ends
	std::cout << RED << "---------------------------------------------------" << std::endl;

	std::cout << PINK << "ANIMAL Constructing & Destructing & Testing" << std::endl;
	const Animal	*meta = new Animal();
	std::cout << BLUE << "Animal _type: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	
	std::cout << GREEN << "---------------------------------------------------" << std::endl;

	std::cout <<PINK << "CAT Constructing & Destructing & Testing" << std::endl;
	const Animal	*kitty = new Cat();
	std::cout << BLUE << "Cat _type: " << kitty->getType() << std::endl;
	kitty->makeSound();
	delete kitty;

	std::cout << GREEN << "---------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << PINK << "DOG Constructing & Destructing & Testing" << std::endl;
	const Animal	*doggy = new Dog();
	std::cout << BLUE << "Dog _type: " << doggy->getType() << std::endl;
	doggy->makeSound();
	delete doggy;

	std::cout << GREEN << "---------------------------------------------------" << std::endl;

	std::cout << PINK << "WRONG ANIMAL Constructing & Destructing & Testing" << std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	std::cout << BLUE << "Animal _type: " << wrong_meta->getType() << std::endl;
	wrong_meta->makeSound();
	delete wrong_meta;

	std::cout << GREEN << "---------------------------------------------------" << std::endl;

	std::cout << PINK << "WRONG CAT Constructing & Destructing & Testing" << std::endl;
	const WrongAnimal	*wrong_kitty = new WrongCat();
	std::cout << BLUE << "WrongCat _type: " << wrong_kitty->getType() <<std::endl;
	wrong_kitty->makeSound();
	delete wrong_kitty;

	return 0;
}
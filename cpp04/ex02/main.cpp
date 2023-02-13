/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:42:24 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/13 13:36:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define SIZE 4

int main() {
{
    std::cout << std::endl;
    std::cout << RED << "-----[ TEST_1 ] : Example from subject-----\n" << RESET << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i; 
}
{
    std::cout << std::endl;
    std::cout << RED << "---[ TEST_2 ] : Example that subject requires---\n" << RESET << std::endl;
    Animal  *array[SIZE];
    for (int i = 0; i < SIZE; i++) 
	{
        if (i % 2 == 0)
            array[i] = new Dog;
        else
            array[i] = new Cat;
        array[i]->makeSound();
    }
    for (int i = SIZE - 1; i >= 0; i--)
        delete array[i];
}
{
    std::cout << std::endl;
    std::cout << RED << "-----[ TEST_3 ] : Deep Copies-----\n" << RESET << std::endl;

    const Dog     dog;
    const Cat     cat;
    Dog     dog1(dog);
    Cat     cat1(cat);
    
    // dog.getBrain()->getIdea(1);
    std::cout << GRAY << dog.getBrain()->getIdea(2) << std::endl;
    std::cout << dog1.getBrain()->getIdea(2) << std::endl;
	dog.getBrain()->setIdea(2, "Dog new idea!!");
    std::cout << dog.getBrain()->getIdea(2) << std::endl;
    std::cout << dog1.getBrain()->getIdea(2) << std::endl;

}
{
    std::cout << std::endl;
    std::cout << RED << "-----[ TEST_4 ] : Deep Copies-----\n" << RESET << std::endl;
    Dog dog;
	Cat cat;
	Dog dog2;
	Cat cat2(cat);

	dog2 = dog;

	dog2.getBrain()->setIdea(0, "Dog new idea!!");
	cat2.getBrain()->setIdea(8, "Cat new idea!!");

	std::cout << GRAY << dog.getBrain()->getIdea(0) << std::endl;
	std::cout << cat.getBrain()->getIdea(8) << std::endl;
	std::cout << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout << cat2.getBrain()->getIdea(8) << std::endl;
}
// {
//     std::cout << std::endl;
//     std::cout << RED << "-----[ TEST_5 ] : abstract class-----" << std::endl;

//     const Animal* meta = new Animal();
//     meta->makeSound();
//     delete meta; 
// }
while(42){};
}

/*A shallow copy of an object only copies its data members and creates a new object 
with the same data. However, the data members that are objects or pointers to objects 
are not duplicated, but instead, the new object will contain pointers to the same 
objects as the original object. This means that if one of the objects is modified, 
the change will be reflected in both the original object and the shallow copy.

On the other hand, a deep copy of an object duplicates all of its data members, 
including any objects or pointers to objects, so that the new object is an independent 
copy of the original object. Changes made to one object will not affect the other, 
since they do not share any data.

In C++, a shallow copy is the default behavior when copying objects, but it can be 
overridden by implementing a custom copy constructor or a copy assignment operator 
that performs a deep copy. */
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:30:55 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 15:59:07 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base * generate(void)
{
	std::srand(std::time(NULL));
	int	rand = std::rand() % 3;
	switch (rand)
	{
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
		default: return  nullptr;
	}
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
	else 
        std::cout << "ERROR" << std::endl;
}
/*When you use dynamic_cast to cast from a pointer of the base class to 
a pointer of the derived class, you are performing a downcast. In this 
case, the Base* pointer is being downcast to A*, B*, or C* pointer based 
on the dynamic type of the object it points to.
If the dynamic type of the object being pointed to by the Base* pointer 
is actually an object of A, B, or C type, the corresponding pointer of 
the derived class will be assigned the address of that object. Then, 
based on which of these derived class pointers is not a null pointer, 
the function identifies the actual type of the object being pointed to 
by the Base* pointer.*/

void identify(Base& p)
{
	try {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast&) {}
	try {
		B b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast&) {}
	try {
		C c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast&) {}
}

/*The dynamic_cast operator is used to downcast the Base& reference to 
references of the derived classes A&, B&, and C&.The use of try-catch is 
mandatory. This is because the dynamic_cast operation throws a "std::bad_cast"
exception if an invalid type conversion is attempted. In this case, the exception 
should be caught using a catch block and the program should continue to execute.

The dynamic_cast operator allows a subclass object to be cast to a superclass 
object, or a superclass object to be cast to a subclass object. However, if 
type incompatibility occurs during this operation, a std::bad_cast exception 
is thrown. This exception can cause the program to terminate unexpectedly. 
Therefore, using try-catch when using dynamic_cast is a good practice.*/
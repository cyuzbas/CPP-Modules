/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:30:35 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 15:59:57 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main ( void ) 
{
    Base *base = generate();
    if (base)
        std::cout << "Base is generated." << std::endl;
    if (base) {
        std::cout << "Base* p is pointing to: ";
        identify(base);
        std::cout << "Base& p is pointing to: ";
        identify(base);
    }
    delete base;
    // while(42){};
}
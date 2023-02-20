/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 16:03:51 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 22:26:36 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) 
{
	{
		int a = 2;
		int b = 3;
		
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	
	// std::cout << std::endl;

    // {
    //     //float
    //     float a = 2.1f;
    //     float b = 2.2f;
    //     ::swap( a, b );
    //     std::cout << "a = " << a << ", b = " << b << std::endl;
    //     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    //     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    // }

	// std::cout << std::endl;
	
    // {
    //     //double
    //     float a = 1.4;
    //     float b = 1.6;
    //     ::swap( a, b );
    //     std::cout << "a = " << a << ", b = " << b << std::endl;
    //     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    //     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    // }

	
	return 0;
}
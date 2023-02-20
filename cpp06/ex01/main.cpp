/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 13:10:51 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 14:21:19 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main( void ) {
    Data *data = new Data();
    data->str = "FourtyTwo";
	
    uintptr_t raw = serialize(data);
    Data *newData = deserialize(raw);
	
    std::cout << BLUE << "Address of data:	" << data << std::endl;
    std::cout << "Unsigned int raw:	" << raw << std::endl;
    std::cout << "Address of newData:	" << newData << RESET << std::endl;
	
	if ( data == newData )
		std::cout << GREEN << "Successful serialize/deserialize" << RESET << std::endl;
    else   
        std::cout << RED << "Unsuccesful serialize/deserialize" << RESET << std::endl;

	std::cout << BLUE << "Original str:	" << data->str << std::endl;
	std::cout << "newData str:	" << newData->str << std::endl;
    delete data;
    // while(42){};
}
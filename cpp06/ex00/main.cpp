/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 10:13:32 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/17 16:02:49 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// int detectType(std::string input)
// {
// 	if ()
// }

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED << "Invalid input amount" << RESET << std::endl;
		return(EXIT_FAILURE);
	}
	try
	{
		Converter Converter(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return (EXIT_SUCCESS);
}

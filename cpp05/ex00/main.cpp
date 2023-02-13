/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:51:31 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/13 18:31:44 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <cerrno>

void test1()
{
	try
	{
		if (/*error*/)
		{
			throw std::exception();
		}
		else
		{

		}
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		//handle the error
	}
	
}
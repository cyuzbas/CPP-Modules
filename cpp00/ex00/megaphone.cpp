/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 11:40:27 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/11/30 12:10:41 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	std::string	msg;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			msg = argv[i];
			for (size_t j = 0; j < msg.length(); j++)
				std::cout << (char)toupper(msg[j]);
		}
	}
	std::cout << std::endl;
	return 0;
}
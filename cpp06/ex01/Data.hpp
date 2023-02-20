/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 13:10:54 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 14:16:22 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

struct Data
{
	std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
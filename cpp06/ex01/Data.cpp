/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 13:10:56 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 14:13:57 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) 
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t  raw)
{
	return reinterpret_cast<Data*>(raw);
}

/* <reinterpret_cast> is a C++ casting operator that allows to interpret a type as 
another type, disregarding its actual structure or meaning, and simply treating 
it as a sequence of bits. The reinterpret_cast operator is used for low-level 
type conversions that involve pointer types, and it can be used to convert between 
different types that are unrelated or have different sizes.

However, it should be used with caution, since it can easily result in undefined 
behavior or crashes if used incorrectly.*/
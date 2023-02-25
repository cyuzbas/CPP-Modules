/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 12:54:41 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 15:18:07 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <iterator>

class NotFoundException: public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return ("Value not found in container");
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
		throw (NotFoundException());
    return it;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 22:30:21 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/23 12:06:51 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

/*iterates over your array and applies the 
function on each element until len is hit*/
template<typename T>
void	iter(T *array, size_t len, void(*f)(T& elem))
{
	if (!array)
        return ;
	for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void display(T & txt){
    std::cout << txt << std::endl;
}

#endif
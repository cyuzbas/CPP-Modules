/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 16:06:15 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/23 11:56:58 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &arg1, T &arg2)
{
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template<typename T>
T 	min(T &val1, T &val2)
{
	return val1 < val2 ? val1 : val2;
}

template<typename T>
T 	max(T &val1, T &val2)
{
	return val1 > val2 ? val1 : val2;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:31:21 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/20 14:48:23 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base
{
public:

	virtual ~ Base();
	
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 17:38:32 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/12 20:46:11 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GRAY << "[Brain] Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
        this->_ideas[i] = "An idea";
}

Brain::Brain(const Brain &src)
{
	std::cout << GRAY << "[Brain] Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	    this->_ideas[i] = src.getIdea(i);
}

Brain::~Brain()
{
	std::cout << GRAY << "[Brain] Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src) 
{
    for (int i = 0; i < 100; i++)
	    this->_ideas[i] = src.getIdea(i);
	return *this;
}

const std::string &Brain::getIdea(int i) const 
{
	return(this->_ideas[i]);
}
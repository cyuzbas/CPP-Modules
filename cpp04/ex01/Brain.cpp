/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 17:38:32 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/13 12:54:21 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BLUE << "[Brain] Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		char num = i + 48;
        this->_ideas[i] = "Default idea number:  ";
		this->_ideas[i].push_back(num);
	}
}

Brain::Brain(const Brain &src)
{
	std::cout << BLUE << "[Brain] Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	    this->_ideas[i] = src.getIdea(i);
}

Brain::~Brain()
{
	std::cout << BLUE << "[Brain] Destructor called" << std::endl;
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

void	Brain::setIdea(int i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
}
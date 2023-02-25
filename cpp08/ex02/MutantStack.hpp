/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 21:07:04 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 21:51:07 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>
#include <algorithm>
#include <stdexcept>

#include <stack>
#include <iterator>


template<typename T>
class MutantStack : public std::stack<T>
{
public:
    // Define stack and iterator type
	typedef std::stack<T> stack;
    typedef typename stack::container_type::iterator iterator;
	
    // Inherit constructors from std::stack
    MutantStack() : stack() {}
    MutantStack(MutantStack const &other) : stack(other) {}
    ~MutantStack() {this->c.clear();}
    
	// Overloaded opperator
	MutantStack &operator=(MutantStack &other)
    {
        stack::operator=(other);
        return *this;
    }

    // Add begin() and end() member functions to return iterators
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};

#endif

/* In the std::stack class, the underlying container is accessed 
through the 'c' member. By calling begin() (or end()) on 'this->c', 
we are calling the begin() member function of the underlying container, 
which returns an iterator to the beginning of the container.  */
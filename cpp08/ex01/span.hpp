/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 15:23:37 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 20:52:22 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    std::vector<int>	_numbers;
    unsigned int		_N;

public:

	Span(unsigned int n);
	Span(const Span& other);
	Span &operator=(const Span& other);
	~Span ();

	void addNumber(int n);
	int shortestSpan( void ) const;
	int longestSpan( void ) const;

	void addIntRange( int first, int last );
	template <typename InputIterator>
	void addNumbers(InputIterator first, InputIterator last)
	{
		if (_numbers.size() + std::distance(first, last) > _N)
			throw NoSpaceException();
		_numbers.insert(_numbers.end(), first, last);
	}

	class NoSpaceException : public std::exception {
		public:
			virtual char const *what() const throw();
	};

	class NoElementException : public std::exception {
		public:
			virtual char const *what() const throw();
	};



   






};


#endif
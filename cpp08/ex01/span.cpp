/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 15:23:44 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 21:00:40 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span( unsigned int n) : _N(n) {
	if (_N == 0)
		throw Span::NoElementException();
	_numbers.reserve(n);
}

Span::Span(const Span& other)
{
	*this = other;
}

Span &Span::operator=(const Span& other)
{
    if (this == &other)
        return *this;
    _N = other._N;
    _numbers.assign((other._numbers).begin(), (other._numbers).end());
    return *this;
}

Span::~Span( void ) {}

void Span::addNumber( int n ) {
    if (_numbers.size() < _N)
        _numbers.push_back(n);
    else
        throw NoSpaceException();
}


int Span::shortestSpan( void ) const
{
	if (_numbers.size() <= 1)
		throw NoElementException();
	std::vector<int> sorted_numbers = _numbers;
	std::sort(sorted_numbers.begin(), sorted_numbers.end());
	int shortest = sorted_numbers.back() - sorted_numbers.front();
	for (unsigned int i = 1; i < sorted_numbers.size(); i++) 
	{
		int diff = sorted_numbers[i] - sorted_numbers[i-1];
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

int Span::longestSpan( void ) const{
	if (_numbers.size() <= 1)
		throw NoElementException();
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}

void Span::addIntRange(int first, int last)
{
	if (_numbers.size() + (last - first) > _N)
        throw NoSpaceException();
    else if (first >= last)
        throw std::runtime_error("Error, First element can'be bigger");
    for (; first != last; first++)
        _numbers.push_back(first);
}

const char	*Span::NoSpaceException ::what() const throw()
{
	return "ERROR: Vector is already full!";
}

const char	*Span::NoElementException ::what() const throw()
{
	return "ERROR: Vector does not contain enough element! ";
}
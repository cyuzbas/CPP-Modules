/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 12:14:19 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/23 13:00:28 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
private:

    unsigned int _size;
    T* _array;
	
public:
    // Construction with no parameter: Creates an empty array.
    Array() : _size(0), _array(nullptr) {}
    
    /* Construction with an unsigned int n as a parameter: 
	Creates an array of n elements initialized by default.*/
    Array(unsigned int n) : _size(n), _array(new T[n]) {}
    
    // Copy construction
    Array(const Array& other) : _size(other._size), _array(new T[other._size]) 
	{
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = other._array[i];
        }
    }
	
    // Destructor
    ~Array() {
        delete[] _array;
    }
    
    // Assignment operator overload
    Array& operator=(const Array& other) 
	{
        if (this != &other) {
            delete[] _array;
            _size = other._size;
            _array = new T[other._size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        return *this;
    }
    
    // Subscript operator overload
    T& operator[](unsigned int index) const{
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return _array[index];
    }

    // Member function size()
    unsigned int size() const {
        return _size;
    }
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:13:27 by njung             #+#    #+#             */
/*   Updated: 2026/01/15 16:48:06 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T> class Array
{
    private:
    T *_array;
    unsigned int _size;
    
    public:
    Array() : _array(new T[0]), _size(0) {}
    Array(unsigned int n): _size(n) {
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = T();
    }
    Array(const Array<T> & other) : _size(other._size)
    {
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = other._array[i];
    }
    Array<T>& operator=(const Array<T>& other) {
			if (this != &other) {
				delete[] _array;
				_size = other._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i) {
					_array[i] = other._array[i];
				}
			}
			return *this;
		}
    ~Array() {
        delete[] _array;
    }
};
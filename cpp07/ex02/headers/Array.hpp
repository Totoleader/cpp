/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:18:00 by macote            #+#    #+#             */
/*   Updated: 2023/12/12 11:42:31 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>

template <typename T>
class Array
{
	private:
		T 					*_array;
		unsigned int	_len;

	public:
		Array<T>(): _array(new T[1]), _len(1)
		{
		}

		Array<T>(unsigned int n): _array(new T[n]), _len(n)
		{
		}

		~Array<T>()
		{
			delete[] _array;
		}

		T& operator[](unsigned int index)
		{
			try
			{
        		if (index > _len - 1) 
        		    throw BadIndexException();
        		return _array[index];
			}
			catch(const Array<T>::BadIndexException& e)
			{
				std::cerr << e.what() << '\n';
        		return _array[0];
			}
    	}

		Array& operator=(Array& other)
		{
			_len = other.size();
			if (_array)
				delete[] _array;
			_array = new T[_len];
			for (unsigned int i = 0; i < _len; i++)
				_array[i] = other[i];

			return (*this);
		}

		unsigned int size() const
		{
			return (_len);
		}

		class BadIndexException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index out of bound Exception Caught.");
				}
		};
};

#endif // __ARRAY_H__
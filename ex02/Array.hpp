/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:58:38 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/26 11:52:49 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array{
	public:
		Array()
		{
			_size = 0;
			array = NULL;
		}
		Array(unsigned int const n)
		{
			_size = n;
			n != 0 ?  array = new T[n] : array = NULL;
		}
		Array(Array const &src)
		{
			_size = src._size;
			_size != 0 ? array = new T[_size] : array = NULL; 
			for (unsigned int i=0; i < _size; i++)
				array[i] = src[i];
		}
		
		~Array()
		{
			delete[] array;
		}
		
		
		Array	&operator=(Array const &rhs)
		{
			this->_size = rhs._size;
			delete[] this->array;
			_size != 0 ? array = new T[this->_size] : array = NULL;
			for(unsigned int i = 0; i < _size; i++)
				this->array[i] = rhs[i];
			return(*this);
		}
		T		&operator[](unsigned int const n) const
		{
			if(n >= _size)
				throw(std::out_of_range("Selected index exceeds array limits"));
			else
				return(array[n]);
		}

		unsigned int size(void) const
		{
			return(this->_size);
		}
	private:
		T *array;
		unsigned int _size;
};
#endif

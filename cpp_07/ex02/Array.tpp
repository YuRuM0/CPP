/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:24:59 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/31 19:17:35 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
inline Array<T>::Array(): array(NULL), _size(0)
{
}

template <typename T>
inline Array<T>::Array(unsigned int n): array(new T[n]), _size(n)
{
}

template <typename T>
inline Array<T>::Array(const Array &obj) :array(new T[obj.size]), _size(obj._size)
{
	for (int i = 0; i <  obj._size; i++)
		array[i] = obj.array[i];
}

template <typename T>
inline Array <T>&Array<T>::operator=(const Array &obj)
{
	if (this != &obj)
	{
		this->size = obj._size;
		delete [] array;
		array(new T[obj._size]);
		for (int i = 0; i <  obj._size; i++)
			array[i] = obj.array[i];
	}
	return (*this);
}

template <typename T>
inline T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw IndexOutOfBoundException();
	return (array[i]);
}

template <typename T>
inline unsigned int Array<T>::size()
{
	return (this->size);
}

template <typename T>
inline Array<T>::~Array()
{
	delete [] array;
}

template <typename T>
inline const char *Array<T>::IndexOutOfBoundException::what() const noexcept
{
	const char *msg = "Index out of bound.\n";
	return (msg);
}

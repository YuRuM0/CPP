/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:15:51 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/31 19:30:04 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T				*array;
		unsigned int	_size;
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array <T>&operator=(const Array &obj);
		T &operator[](unsigned int i);
		unsigned int size();
		~Array();

	class IndexOutOfBoundException : public std::exception
	{
		public:
			const char* what() const noexcept override;
	};
};

#include "Array.tpp"

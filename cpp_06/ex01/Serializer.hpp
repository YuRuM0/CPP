/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:53:14 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/25 15:18:27 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Data.hpp"
#include <cstdint>

/*
to make it not instantiatable,
only static methods in public,
private constructor and destructor
*/

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &obj);
		Serializer &operator=(const Serializer &obj);
		~Serializer();
		
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};
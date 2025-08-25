#include "Serializer.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:53:12 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/25 14:53:13 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &obj)
{
}

Serializer &Serializer::operator=(const Serializer &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

/*
static cast: for "safe conversions", e.g. int <-> char
reinterpret_cast: casting b/w ptr and int is not safe in general and thus the compiler can't reason about it safely
dynamic_cast: when there exists virtual func, for class hierarchies
uintptr_t = unsinged int type guaranteed to be large to hold ptr
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:53:06 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/25 15:28:10 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.type = "type_one";
	
	uintptr_t raw;
	Data *ptr;

	raw = Serializer::serialize(&data);
	std::cout << "What happens after serialisation: " << raw << std::endl;
	ptr = Serializer::deserialize(raw);

	std::cout << "Data's address: " << &data << std::endl;
	std::cout << "Deserialised data's address: " << ptr << std::endl;
	
	return (0);
}

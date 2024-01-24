/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:43:40 by macote            #+#    #+#             */
/*   Updated: 2023/12/08 13:26:11 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data *data = new Data;
	std::cout << "Adress before serialization: " << data << std::endl;
	std::cout << "Value before serialization: " << data->get_value() << std::endl << std::endl;
	//constructor sets default value to 42
	uintptr_t serialized_data;
	
	//serializing
	serialized_data = serialize(data);
	
	//deserializing
	Data *deserialized_data = deserialize(serialized_data);
	
 	//value still == 42 when deserialized
	std::cout << "Adress after serialization: " << deserialized_data << std::endl;
	std::cout << "Value after serialization: " << deserialized_data->get_value() << std::endl;

	return (0);
}

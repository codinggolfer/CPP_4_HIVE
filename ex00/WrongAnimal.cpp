/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:18:37 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 12:29:17 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << this->type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& copy) : type(copy.type) {}

void WrongAnimal::makeSound() const {
	std::cout << "This WrongAnimal is making weird " << type << " noices." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " destroyed, this is WrongAnimal deconsturctor" << std::endl;
}


std::string WrongAnimal::getType() const
{
	return type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:18:37 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 23:13:45 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongCat::WrongCat() : type("WrongCat") {
	std::cout << this->type << " created" << std::endl;
}

WrongCat::WrongCat(WrongCat& copy) : type(copy.type) {}

void WrongCat::makeSound() const {
	std::cout << "This WrongCat is making proper " << this->type << " noices." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << this->type << " destroyed, This is WrongCats deconsturctor." << std::endl;
}

std::string WrongCat::getType() const
{
	return type;
}


//#############################################################################################################


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
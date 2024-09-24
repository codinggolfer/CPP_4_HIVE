/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:58 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 17:34:51 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog() : type("Dog") {
	std::cout << "The Animal was a " << this->type + "." << std::endl;
}

Dog::Dog(Dog& copy)
{
	*this = copy;
	std::cout << "Dog was created with Dog copy consturctor" << std::endl;
}

Dog& Dog::operator=(Dog& copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "This animal is making proper " << this->type << " noices." << std::endl;
}

std::string Dog::getType() const {
	return type;
}

Dog::~Dog() {
	std::cout << this->type +  " got crushed by deconsturctor." << std::endl;
}
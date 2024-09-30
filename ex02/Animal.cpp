/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:50:33 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 17:36:09 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Stork brought some kind of animal" << std::endl;
}

Animal::Animal(Animal& copy)
{
	*this = copy;
	std::cout << "Animal was created with animal copy consturctor" << std::endl;
}

Animal& Animal::operator=(Animal& copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << this->getType() << " making " << this->getType() << " noices." << std::endl;
}

std::string Animal::getType() const {
	return type;
}

Animal::~Animal() {
	std::cout << "Animal got crushed by deconsturctor." << std::endl;
}
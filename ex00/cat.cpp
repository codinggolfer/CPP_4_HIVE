/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:52 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 17:35:08 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() : type("Cat") {
	std::cout << "The Animal was a " << this->type + "." << std::endl;
}

Cat::Cat(Cat& copy)
{
	*this = copy;
	std::cout << "Cat was created with Cat copy consturctor" << std::endl;
}

Cat& Cat::operator=(Cat& copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "This animal is making proper " << this->type << " noices." << std::endl;
}

std::string Cat::getType() const {
	return type;
}

Cat::~Cat() {
	std::cout << this->type +  " got crushed by deconsturctor." << std::endl;
}

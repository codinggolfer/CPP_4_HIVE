/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:58 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/30 12:37:02 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->_DogBrain = new Brain();
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
	{
		this->type = copy.type;
		this->_DogBrain = copy._DogBrain;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "This animal is making proper " << this->type << " noices." << std::endl;
}

std::string Dog::getType() const {
	return type;
}

Dog::~Dog() {
	delete _DogBrain;
	std::cout << this->type +  " released to the wild." << std::endl;
}
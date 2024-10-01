/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:58 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 12:41:32 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
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
	std::cout << "This Dog is making proper " << this->type << " noices." << std::endl;
}

std::string Dog::getType() const {
	return type;
}

Dog::~Dog() {
	std::cout << this->type +  " released to the wild in deconstructor town." << std::endl;
}
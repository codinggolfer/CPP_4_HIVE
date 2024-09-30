/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:52 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/30 12:37:11 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->_CatBrain = new Brain();
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
	{
		this->type = copy.type;
		this->_CatBrain = copy._CatBrain;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "This animal is making proper " << this->type << " noices." << std::endl;
}

std::string Cat::getType() const {
	return type;
}

Cat::~Cat() {
	delete _CatBrain;
	std::cout << this->type +  " found a new home." << std::endl;
}

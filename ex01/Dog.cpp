/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:58 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 16:48:45 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->_DogBrain = new Brain();
	std::cout << "The Animal was a " << this->type + "." << std::endl;
}

Dog::Dog(Dog& copy) : _DogBrain(new Brain(*(copy._DogBrain)))
{
	this->type = copy.type;
	std::cout << "Dog was created with Dog copy consturctor" << std::endl;
}

Dog& Dog::operator=(Dog& copy)
{
	if (this != &copy)
	{
		delete _DogBrain;
		this->type = copy.type;
		this->_DogBrain = new Brain(*(copy._DogBrain));
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "HAUHAU " << this->type << " noices. In Dog.cpp" << std::endl;
}

std::string Dog::getType() const {
	return type;
}

void Dog::setIdeas(std::string newIdeas) {
	this->_DogBrain->setIdeas(newIdeas, ideaIndex);
	ideaIndex++;
}

std::string Dog::getIdeas() {
	return _DogBrain->getIdeas();
}

void Dog::printIdeas()
{
		this->_DogBrain->printIdeas(ideaIndex);
}

Dog::~Dog() {
	delete _DogBrain;
	std::cout << this->type +  " released to the wild." << std::endl;
}
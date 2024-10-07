/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:52 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:34:20 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() {
	this->type = "Cat";
	this->_CatBrain = new Brain();
	std::cout << "The Animal was a " << this->type + "." << std::endl;
}

Cat::Cat(Cat& copy) : _CatBrain(new Brain(*(copy._CatBrain)))
{
	this->type = copy.type;
	std::cout << "Cat was created with Cat copy consturctor" << std::endl;
}

Cat& Cat::operator=(Cat& copy)
{
	if (this != &copy)
	{
		delete _CatBrain;
		this->type = copy.type;
		this->_CatBrain = new Brain(*(copy._CatBrain));
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MIAUMIAU " << this->type << " noices." << std::endl;
}

// std::string Cat::getType() const {
// 	return type;
// }

void Cat::setIdeas(std::string newIdeas) {
	if (ideaIndex > 99)
	{
		std::cout << "can't have that many ideas" << std::endl;
		return;
	}
	this->_CatBrain->setIdeas(newIdeas, ideaIndex);
	ideaIndex++;
}

std::string Cat::getIdeas(int ideaIndex) {
	if (ideaIndex < 0 || ideaIndex > 99)
	{
		std::cout << "invalid idea index" << std::endl;
		return "";
	}
	return _CatBrain->getIdeas(ideaIndex);
}

void Cat::printIdeas()
{
		this->_CatBrain->printIdeas(ideaIndex);
}

Cat::~Cat() {
	delete _CatBrain;
	std::cout << this->type +  " found a new home." << std::endl;
}

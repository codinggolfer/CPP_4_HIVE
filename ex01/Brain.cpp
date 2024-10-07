/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:35:18 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:32:23 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Ideas created" << std::endl;
}

Brain::Brain(Brain& copy) {
	std::cout << "Brains copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(Brain& copy) 
{
	std::cout << "Brains copy assignment called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

void Brain::setIdeas(std::string newIdeas, int ideaIndex) {
	this->ideas[ideaIndex] = newIdeas;
}

std::string Brain::getIdeas(int i) {
	if (i < 0 || i > 99)
	{
		std::cout << "can't have that many ideas" << std::endl;
		return "";
	}
	return *this->ideas;
}

void Brain::printIdeas(int ideaIndex)
{
	for (int i = 0; i < ideaIndex; i++)
		std::cout << "ideas: " << this->ideas[i] << std::endl;
}

Brain::~Brain() {
	std::cout << "Brains destroyed" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:35:18 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/30 12:46:18 by eagbomei         ###   ########.fr       */
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
		*this = copy;
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brains destroyed" << std::endl;
}
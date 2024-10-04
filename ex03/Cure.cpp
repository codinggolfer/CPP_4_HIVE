/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:07:16 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/04 14:50:11 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& copy) : AMateria(copy.type) {
	this->type = copy.type;
}

Cure& Cure::operator=(Cure& copy) {
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

Cure::~Cure() {
	std::cout << "Cure materia destroyed" << std::endl;
}
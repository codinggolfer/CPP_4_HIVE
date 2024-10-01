/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:07:16 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:15 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure& copy) : AMateria(copy) {
	this->type = copy.type;
}

Cure& Cure::operator=(Cure& copy) {
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

Cure* Cure::clone() {
	return new Cure(*this);
}

Cure::~Cure() {}
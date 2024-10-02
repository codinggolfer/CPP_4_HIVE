/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:19:51 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 14:44:46 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& copy) : AMateria(copy.type) {
	this->type = copy.type;
}

Ice& Ice::operator=(Ice& copy) {
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

Ice::~Ice() {}
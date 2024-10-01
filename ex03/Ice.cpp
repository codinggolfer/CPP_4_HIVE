/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:19:51 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 18:24:36 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {}

Ice::Ice(Ice& copy) : AMateria(copy) {
	this->type = copy.type;
}

Ice& Ice::operator=(Ice& copy) {
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

Ice* Ice::clone() {
	return new Ice(*this);
}

Ice::~Ice() {}
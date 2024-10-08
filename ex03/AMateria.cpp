/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 08:55:07 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/03 09:29:19 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const& type) : type(type) {}

AMateria::AMateria(AMateria& copy) : type(copy.type) {}

AMateria& AMateria::operator=(AMateria& copy) {
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

std::string const& AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	if (this->getType() == "ice")
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria::~AMateria() {}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:59:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 10:43:06 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int floorIndex = 0;

Character::Character() : name(nullptr) {
	this->slot = new std::string[4];
}

Character::Character(std::string newName) : name(newName) {}

Character::Character(Character& copy) : name(copy.name) {}

Character& Character::operator=(Character& copy) {
	if (this != &copy)
	{
		this->name = copy.name;
	}
	return *this;
}

std::string const& Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slot[i].empty())
			slot[i] = m->getType();
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 && idx < 0) {
		std::cout << "invalid index, no slots from inventory found" << std::endl;
		return;
	}
	floor[floorIndex] = slot[idx];
	slot[idx] = nullptr;
	floorIndex++;
}

void Character::use(int idx, ICharacter& target) {
	if (!slot[idx].compare(target.getType()))
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (!slot[idx].compare(target.getType()))
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}


Character::~Character() {
	delete[] slot;
}
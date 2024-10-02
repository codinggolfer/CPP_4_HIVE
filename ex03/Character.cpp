/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:59:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 15:14:04 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"



Character::Character() : name(nullptr), floorIndex(0) {
	for (int i = 0; i < 4; i++)
		slot[i] = nullptr;
}

Character::Character(std::string newName) : name(newName), floor(nullptr), floorIndex(0)  {
	for (int i = 0; i < 4; i++)
		slot[i] = nullptr;
}

Character::Character(const Character& copy) : name(copy.name), floor(copy.floor), floorIndex(0) {
	for (int i = 0; i < 4; i++)
		delete this->slot[i];
	for (int i = 0; i < 4; i++)
		this->slot[i] = copy.slot[i]->clone();
}

Character& Character::operator=(const Character& copy) {
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			delete this->slot[i];
		for (int i = 0; i < 4; i++) {
                this->slot[i] = copy.slot[i]->clone();
        }
    }
	return *this;
}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slot[i] == nullptr) {
			slot[i] = m;
			return; 	
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) {
		std::cout << "invalid index, no slots from inventory found" << std::endl;
		return;
	}
	floor[floorIndex] = slot[idx];
	slot[idx] = nullptr;
	floorIndex++;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0) {
		std::cout << "invalid index, no slots from inventory found" << std::endl;
		return;
	}
	if (!slot[idx]->getType().compare("ice"))
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (!slot[idx]->getType().compare("cure"))
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}


Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->slot[i];
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:59:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/03 09:46:19 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name(nullptr), floorHead(nullptr) {
	for (int i = 0; i < 4; i++)
		slot[i] = nullptr;
}

Character::Character(std::string newName) : name(newName), floorHead(nullptr)  {
	for (int i = 0; i < 4; i++)
		slot[i] = nullptr;
}

Character::Character(const Character& copy) : name(copy.name), floorHead(nullptr) {
	floorHead = nullptr;
	for (int i = 0; i < 4; i++)
		delete this->slot[i];
	for (int i = 0; i < 4; i++)
		this->slot[i] = copy.slot[i] ? copy.slot[i]->clone() : nullptr;
}

Character& Character::operator=(const Character& copy) {
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
			delete this->slot[i];
		for (int i = 0; i < 4; i++) {
                this->slot[i] = copy.slot[i] ? copy.slot[i]->clone() : nullptr;
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
	if (idx < 0 || idx > 3 || slot[idx] == nullptr) {
		std::cout << "invalid index or materia slot empty" << std::endl;
		return;
	}
	Floor* newNode = new Floor;
	newNode->materia = slot[idx];
    newNode->next = nullptr;
    floorHead = newNode;
	slot[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0 || slot[idx] == nullptr) {
		std::cout << "invalid index or materia slot empty" << std::endl;
		return;
	}
	if (!slot[idx]->getType().compare("ice"))
		slot[idx]->use(target);
	else if (!slot[idx]->getType().compare("cure"))
		slot[idx]->use(target);
}

void Character::clearFloorList() {
    while (floorHead) {
        Floor* temp = floorHead;
        floorHead = floorHead->next;
        delete temp->materia;  // Assuming each Floor node owns the Materia object
        delete temp;
    }
}

Character::~Character() {
	clearFloorList();
	for (int i = 0; i < 4; i++)
		delete this->slot[i];
	
}
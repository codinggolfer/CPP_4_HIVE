/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:59:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/04 16:50:04 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name(nullptr), floorHead(nullptr) {
	
	for (int i = 0; i < 4; i++)
		slot[i] = nullptr;
}

Character::Character(std::string newName) : name(newName), floorHead(nullptr)  {
	std::cout << "char " + this->name + " created\n";
	floorHead = nullptr;
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
	if (m == nullptr)
		return ;
	for (int i = 0; i < 4; i++){
		if (slot[i] && this->slot[i] == m)
		{
			std::cout << "Materia has been equiped already" << std::endl;
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->slot[i] == nullptr) {
			slot[i] = m;
			std::cout << "new skill equiped by " + this->name + " and the type is " + slot[i]->getType() << std::endl;
			return; 	
		}
	}
	std::cout << "Inventory is full" << std::endl;
	addToFloor(m);
}

void Character::unequip(int idx)
{
	
	if (idx >= 0 && idx > 4 && slot[idx] == nullptr) {
		std::cout << "invalid index or materia slot empty in index: " << idx <<  std::endl;
		return;
	}
	addToFloor(slot[idx]);
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
      	delete temp->materia;
        delete temp;
    }
	floorHead = nullptr;
}

void Character::addToFloor(AMateria* slot){
	Floor* newNode = new Floor;
	newNode->materia = slot;
    newNode->next = nullptr;
    if (floorHead == nullptr)
		floorHead = newNode;
	else 
	{
		Floor* current = floorHead;
		while (current->next != nullptr)
			current = current->next;
		current->next = newNode;
	}
}

Character::~Character() {
	std::cout << this->name + " character deconstructor " << std::endl;
	clearFloorList();
	for (int i = 0; i < 4; i++)
		delete this->slot[i];
	
}


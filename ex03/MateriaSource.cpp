/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:44:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/10 15:25:19 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
	for (int i= 0; i < 4; i++)
		learned[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource& copy) : materiaCount(copy.materiaCount) {
	for (int i= 0; i < 4; i++)
			delete learned[i];
	for (int i= 0; i < 4; i++)
		learned[i] = copy.learned[i];
}


MateriaSource& MateriaSource::operator=(MateriaSource& copy) {
	if (this != &copy)
	{
		for (int i= 0; i < 4; i++)
			delete learned[i];
		this->materiaCount = copy.materiaCount;
		for (int i= 0; i < 4; i++)
			learned[i] = copy.learned[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (materia == nullptr)
		return;
	if (materiaCount >= 4)
		delete materia;
	if (materiaCount < 4) {
		learned[materiaCount] = materia;
		materiaCount++;
		std::cout << "Materia learned " + materia->getType() << std::endl;
	}
	
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	std::cout << "Materia learned " + type << std::endl;
	for (int i = 0; i < materiaCount; i++) {
		if (!learned[i]->getType().compare(type))
			return learned[i]->clone();
	}
	return 0;
}

MateriaSource::~MateriaSource() {
	std::cout << "materia deconstructor" << std::endl;
	for (int i = 0; i < materiaCount; i++)
		delete learned[i];
}

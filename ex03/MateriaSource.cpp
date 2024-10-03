/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:44:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/03 09:33:50 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
	for (int i= 0; i < 4; i++)
		learned[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource& copy) : materiaCount(copy.materiaCount) {
	for (int i= 0; i < 4; i++)
		learned[i] = copy.learned[i];
}


MateriaSource& MateriaSource::operator=(MateriaSource& copy) {
	if (this != &copy)
	{
		this->materiaCount = copy.materiaCount;
		for (int i= 0; i < 4; i++)
			learned[i] = copy.learned[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (materia == nullptr)
		return;
	if (materiaCount < 4) {
		learned[materiaCount] = materia;
		materiaCount++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < materiaCount; i++) {
		if (!learned[i]->getType().compare(type))
			return learned[i]->clone();
	}
	return 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < materiaCount; i++)
		delete learned[i];
}

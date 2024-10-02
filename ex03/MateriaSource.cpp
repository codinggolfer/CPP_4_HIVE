/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:44:00 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 15:11:02 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
	for (int i= 0; i < 4; i++)
		learned[i] = nullptr;
}

// MateriaSource::MateriaSource(MateriaSource& copy) {
	
// }


// MateriaSource& MateriaSource::operator=(MateriaSource& copy) {
	
// }




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

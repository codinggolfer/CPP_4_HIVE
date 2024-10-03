/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:44:29 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/03 09:29:52 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* learned[4];
	int materiaCount;
public:
	MateriaSource();
	MateriaSource(MateriaSource& copy);
	MateriaSource& operator=(MateriaSource& copy);

	void learnMateria(AMateria*) override;
	AMateria* createMateria(std::string const & type) override;
	~MateriaSource() override;
};


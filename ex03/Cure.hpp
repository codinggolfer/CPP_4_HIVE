/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:51:39 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 18:26:03 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(Cure& copy);
	Cure& operator=(Cure& copy);
	AMateria* clone() const  override;
	Cure* clone() override;
	~Cure();
};


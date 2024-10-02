/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:51:39 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 09:24:10 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(const Cure& copy);
	Cure& operator=(Cure& copy);
	AMateria* clone() const  override;
	~Cure();
};


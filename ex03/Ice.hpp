/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:50:57 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 09:25:00 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	Ice(const Ice& copy);
	Ice& operator=(Ice& copy);
	AMateria* clone() const  override;

	~Ice();
};


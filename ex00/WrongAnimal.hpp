/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:03 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 12:26:15 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal
{
protected:
	const	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& copy);
	void makeSound() const;
	std::string getType() const;
	virtual ~WrongAnimal();
};


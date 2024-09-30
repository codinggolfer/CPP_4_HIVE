/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:03 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 23:09:35 by eagbomei         ###   ########.fr       */
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


class WrongCat : public WrongAnimal
{
protected:
	const	std::string type;
public:
	WrongCat();
	WrongCat(WrongCat& copy);
	void makeSound() const;
	std::string getType() const;
	~WrongCat();
};




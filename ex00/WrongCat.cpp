/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:29:27 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 12:29:40 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat") {
	std::cout << this->type << " created" << std::endl;
}

WrongCat::WrongCat(WrongCat& copy) : type(copy.type) {}

void WrongCat::makeSound() const {
	std::cout << "This WrongCat is making proper " << this->type << " noices." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << this->type << " destroyed, This is WrongCats deconsturctor." << std::endl;
}

std::string WrongCat::getType() const
{
	return type;
}
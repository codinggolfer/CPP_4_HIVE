/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:07:42 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/30 12:25:21 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _DogBrain;
public:
	Dog();
	Dog(Dog& copy);
	Dog& operator=(Dog& copy);
	std::string getType() const;
	void makeSound() const;
	~Dog();
};
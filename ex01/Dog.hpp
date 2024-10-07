/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:07:42 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:33:40 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _DogBrain;
	int ideaIndex = 0;
public:
	Dog();
	Dog(Dog& copy);
	Dog& operator=(Dog& copy);
//	std::string getType() const;
	void setIdeas(std::string newideas);
	std::string getIdeas(int ideaIndex);
	void printIdeas();
	void makeSound() const;
	~Dog();
};
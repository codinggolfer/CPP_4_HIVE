/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:06:26 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:03:39 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _CatBrain;
	int ideaIndex = 0;
public:
	Cat();
	Cat(Cat& copy);
	Cat& operator=(Cat& copy);
	std::string getType() const;
	void makeSound() const;
	void setIdeas(std::string newideas);
	void printIdeas();
	std::string getIdeas(int ideaIndex);
	~Cat();
};
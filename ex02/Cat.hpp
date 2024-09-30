/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:06:26 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/30 12:25:18 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _CatBrain;
public:
	Cat();
	Cat(Cat& copy);
	Cat& operator=(Cat& copy);
	std::string getType() const;
	void makeSound() const;
	~Cat();
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:38 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 17:01:33 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
private:
	
protected:
	std::string type;
public:
	Animal();
	Animal(Animal& copy);
	Animal& operator=(Animal& copy);
	virtual void makeSound() const = 0;
	virtual std::string getType() const = 0;
	virtual void setIdeas(std::string lol) = 0;
	virtual ~Animal();
};





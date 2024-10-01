/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:38 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 16:31:39 by eagbomei         ###   ########.fr       */
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
	virtual void makeSound() const;
	virtual std::string getType() const;
	virtual void setIdeas(std::string lol);
	virtual ~Animal();
};





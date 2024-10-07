/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:38 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:35:34 by eagbomei         ###   ########.fr       */
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
	virtual std::string getIdeas(int ideaIndex);
	virtual ~Animal();
};





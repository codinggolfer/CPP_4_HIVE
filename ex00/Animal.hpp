/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:38 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 23:08:50 by eagbomei         ###   ########.fr       */
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
	virtual ~Animal();
};

class Cat : public Animal
{
protected:
	std::string type;
public:
	Cat();
	Cat(Cat& copy);
	Cat& operator=(Cat& copy);
	std::string getType() const;
	void makeSound() const;
	~Cat();
};

class Dog : public Animal
{
protected:
	std::string type;
public:
	Dog();
	Dog(Dog& copy);
	Dog& operator=(Dog& copy);
	std::string getType() const;
	void makeSound() const;
	~Dog();
};




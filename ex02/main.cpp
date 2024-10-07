/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:27 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:22:31 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animals[6];
	//Animal donkey; animal class has one virtual
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	animals[0]->getType();
	animals[1]->getType();
	animals[2]->getType();
	animals[3]->getType();
	animals[4]->getType();
	animals[5]->getType();

	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();
	animals[3]->makeSound();
	animals[4]->makeSound();
	animals[5]->makeSound();
	for (int i = 0; i < 101; i++)
		animals[4]->setIdeas("HELLO");
	std::cout << animals[4]->getIdeas(100) << std::endl;
	// Animal* dog = new Dog();
	// // Animal* dog1 = new Dog();
	// // Animal* Cat1 = new Cat();
	// // Animal* Cat2 = new Cat();
	// dog->setIdeas("kakka");
	// dog->setIdeas("kakka1");
	// dog->setIdeas("kakka2");
	
	// dog->makeSound();

	// delete dog;
	for (int i = 0; i < 6; i++)
		delete animals[i];

return 0;
}
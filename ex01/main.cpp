/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:27 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:39:39 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animals[6];
	Animal* tmp = new Animal();
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << tmp->getType() << std::endl;
	tmp->makeSound();
	tmp->getIdeas(88);
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
	animals[5]->setIdeas("hellooooooooooo\n");
	std::cout << animals[5]->getIdeas(0);
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
	delete tmp;

return 0;
}
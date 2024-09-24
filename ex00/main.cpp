/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:38:27 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 23:11:42 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta; 
delete i; 
delete j; 

std::cout  << std::endl;
std::cout  << std::endl;
std::cout  << "wrong animal test cases:" << std::endl;
std::cout  << std::endl;
std::cout  << std::endl;

const WrongAnimal* koira = new WrongAnimal();
WrongAnimal* kissa = new WrongCat();
std::cout << koira->getType() << " " << std::endl;
std::cout << kissa->getType() << " " << std::endl;
kissa->makeSound();
koira->makeSound();

delete koira;
delete kissa; 

return 0;
}
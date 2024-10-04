/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:25:07 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/04 16:56:43 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	// {
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	
	// tmp = src->createMateria("cure");
	
	// me->equip(tmp);
	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(1);
	// me->unequip(0);
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// }
	// {
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    

    // AMateria* tmp;    
    // ICharacter* boss = new Character("Boss");
    // tmp = src->createMateria("ice");
    // boss->equip(tmp);

    // tmp = src->createMateria("ice");
    // boss->equip(tmp);
    
    // tmp = src->createMateria("cure");
    // boss->equip(tmp);
    
    // tmp = src->createMateria("ice");
    // boss->equip(tmp);
    
    // tmp = src->createMateria("cure");
    // boss->equip(tmp);
    // std::cout << std::endl;
    
    // boss->unequip(0);
    // boss->unequip(1);
    // boss->unequip(2);
    // boss->unequip(3);

    // tmp = src->createMateria("cure");
    // boss->equip(tmp);
    // std::cout << "materia equipped!\n";
    
    // boss->unequip(0);
    
    // delete src;
    // delete boss;
	// }
	{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* other = new Character("other");
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    
    me->equip(tmp);
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    ICharacter* bla = new Character("bla");

    *(static_cast<Character*>(other)) = *(static_cast<Character*>(me));

    other->use(0, *bla);
    other->use(1, *bla);
    other->use(3, *bla);
    other->use(-2, *bla);
    other->use(4, *bla);

    other->unequip(5);
    other->unequip(-2);
    other->unequip(1);
    other->unequip(3);
    other->unequip(0);

    other->use(0, *bla);
    
    std::cout << "after other\n";
    
    
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(3, *bob);
    me->use(-2, *bob);
    me->use(4, *bob);

    me->unequip(5);
    me->unequip(-2);
    me->unequip(1);
    me->unequip(3);
    me->unequip(0);

    me->use(0, *bob);
    me->equip(tmp);
    me->use(0, *bob);

    delete bob;
    delete bla;
    delete me;
   	delete other;
    delete src;
}
	
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:59:30 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 16:08:38 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria* slot[4];
	AMateria* floor[100];
	int floorIndex;
public:
	Character();
	Character(std::string newName);
	Character(const Character& copy);
	Character& operator=(const Character& copy);

	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
	
	~Character() override;
};


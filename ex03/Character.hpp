/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:59:30 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/02 10:30:20 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	std::string* slot;
	std::string* floor;
	static int floorIndex;
public:
	Character();
	Character(std::string newName);
	Character(Character& copy);
	Character& operator=(Character& copy);

	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
	
	~Character();
};


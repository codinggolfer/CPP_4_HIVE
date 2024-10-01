/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:25:18 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/01 12:25:38 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
protected:
	const	std::string type;
public:
	WrongCat();
	WrongCat(WrongCat& copy);
	void makeSound() const;
	std::string getType() const;
	~WrongCat();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:13:19 by eagbomei          #+#    #+#             */
/*   Updated: 2024/10/07 13:29:26 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain& copy);
	Brain& operator=(Brain& copy);
	void setIdeas(std::string newideas, int ideaIndex);
	std::string getIdeas(int i);
	void printIdeas(int ideaIndex);
	~Brain();
};


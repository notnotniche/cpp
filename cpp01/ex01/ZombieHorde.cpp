/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:39:56 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/14 17:56:20 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::Announce()
{
	std::cout << "Salut cest moi le zombie le plus sympa et je mappelle :" << this->_name << std::endl;	
}

Zombie* zombiehorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].SetName(name);
	}
	return (horde);
}

void Zombie::SetName(std::string name)
{
	this->_name = name;
}
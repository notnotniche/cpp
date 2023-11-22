/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:39:56 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/08 16:47:38 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* newZombie = new Zombie(name);
	return (newZombie);
}

void Zombie::Announce()
{
	std::cout << this->_name << ": Salut cest moi le zombie le plus sympa et je mappelle " << std::endl;	
}

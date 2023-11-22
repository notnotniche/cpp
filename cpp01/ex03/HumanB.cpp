/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:27:58 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/22 19:45:06 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_Weapon = NULL;
}

HumanB::~HumanB()
{
}
void HumanB::SetWeapon(Weapon &Weapon)
{
	_Weapon = &Weapon;
}
std::string HumanB::getType()
{
	return _Weapon->getType();
}

void HumanB::Attack()
{
	if (this->_Weapon == NULL)
		std::cout <<  _name << " attacks with nothing " << std::endl;
	else
		std::cout <<  _name << " attacks with " <<  getType() << std::endl;
	
}
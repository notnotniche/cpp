/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:05:36 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/22 19:22:53 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon)
{
}
HumanA::~HumanA(){}

void HumanA::Attack()
{
	std::cout << this->_name << " attacks with his " << this->_Weapon.getType()  << std::endl;
}


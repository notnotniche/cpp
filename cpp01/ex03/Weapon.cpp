/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:57:08 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/22 19:04:38 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){
	this->_name = name;
}

Weapon::~Weapon(){}

std::string Weapon::getType()
{
	return (this->_name);
}
void Weapon::setType(std::string newtype)
{
	this->_name = newtype;	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:54:39 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/22 19:04:29 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "string"
#include "iostream"

class Weapon
{
	private:
		std::string _name;
	public:
		Weapon(std::string name);
		~Weapon();
		std::string getType();
		void setType(std::string newtype);
};

#endif
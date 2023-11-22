/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:20 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/22 19:46:29 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.Attack();
	club.setType("some other type of club");
	bob.Attack();

	HumanB bob1("Bob");
	bob1.SetWeapon(club);
	bob1.Attack();
	club.setType("gulp");
	bob1.Attack();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:20 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/14 17:52:43 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie Manuel("Manuel");
	Manuel.Announce();
	Zombie *Drakkos = newZombie("Drakkos");
	Drakkos->Announce();
	RandomChump("Dofus");
	delete Drakkos;
}
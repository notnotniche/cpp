/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:20 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/08 16:52:27 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie Manuel("Manuel");
	Manuel.Announce();
	Zombie *Drakkos = new Zombie("Drakkos");
	Drakkos->Announce();
}
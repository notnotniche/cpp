/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:40:10 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/08 16:19:40 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void RandomChump(std::string name)
{
	Zombie* RandomChump = new Zombie(name);
	RandomChump->Announce();
	delete RandomChump;
}
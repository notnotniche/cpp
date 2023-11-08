/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:44 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/08 16:50:48 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void Announce();
		void SetName(std::string name);
	private:
		std::string _name;
};

	void RandomChump(std::string name);
	Zombie* newZombie(std::string name);
	Zombie* zombiehorde(int n,std::string name);

#endif
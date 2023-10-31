/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:30:01 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 18:17:15 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string command;
	Phonebook myPhoneBook(8);
	myPhoneBook.Init();
	while(1)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			myPhoneBook.AddContact();
		if (command == "EXIT")
			break;
			
	}
}
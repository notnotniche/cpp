/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:11:29 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 17:37:22 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::AddContact()
{
	if (currentsize < maxsize)
	{
		contacts[currentsize] = Contact();
		currentsize++;
	}
	else
	{
		std::cout << "PhoneBook is full. Cannot add more contacts.";
	}
}
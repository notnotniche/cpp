/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:11:29 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 18:18:41 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::Init()
{
	currentsize = 0;
}

void Phonebook::AddContact()
{
	
	if (currentsize < 8)
	{
		contacts[currentsize] = Contact();
		currentsize++;
	}
	else
	{
		currentsize = 0;
		if (currentsize < 8)
	{
		contacts[currentsize] = Contact();
		currentsize++;
	}
	}
}
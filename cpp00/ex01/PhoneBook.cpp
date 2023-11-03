/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:11:29 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/03 17:53:20 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(){
	std::cout << "PHONEBOOK CREATED" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << std::endl << "PHONEBOOK DESTROYED" << std::endl;
}

void Phonebook::Init()
{
	currentsize = 0;
}

void Phonebook::AddContact()
{
	
	if (currentsize < 8)
	{
		contacts[currentsize] = Contact();
		contacts[currentsize].SetAllContact();
		contacts[currentsize].index = currentsize;
		currentsize++;
	}
	else
	{
		currentsize = 0;
		if (currentsize < 8)
	{
		contacts[currentsize] = Contact();
		contacts[currentsize].SetAllContact();
		contacts[currentsize].index = currentsize;
		currentsize++;
	}
	}
}

 void Phonebook::Search()
{
	std::string test;
	for (int i = 0; i < currentsize; i++)
	{
		contacts[i].Printvalue();
		std::cout << std::endl;
	}
	for (int i = 0; i < currentsize; i++)
	{
		std::getline(std::cin, test);
		std::stringstream ss;
		int num;
		ss << test;
		ss >> num;
		std::cout << num << std::endl;
		if (num == contacts[i].index)
			contacts[i].PrintAllValue();
		else if (test.compare(contacts[i].GetFirstname()) == 0 || test.compare(contacts[i].Getlastname()) == 0 ||\
		test.compare(contacts[i].Getsurname()) == 0)
		{
			contacts[i].PrintAllValue();
		}
		else
			std::cout << "wrong format please try SEARCH function again" << std::endl;
	}
}
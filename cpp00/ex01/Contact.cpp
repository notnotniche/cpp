/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:55:20 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 17:34:55 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact()
{
	std::cout << "Creation du contact" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destruction du contact" << std::endl;	
}

void Contact::Printvalue()
{
	std::cout << this->firstname << std::endl;
	std::cout << this->darkestsecret << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->phonenumber << std::endl;
	std::cout << this->surname << std::endl;	
}
void Contact::SetContactFirstname()
{
	std::cout << "Firstname:";
	std::getline(std::cin, firstname);
}

void Contact::SetcontactLastname()
{
	std::cout << "Lastname:";
	std::getline(std::cin, lastname);
}

void Contact::SetContactSurname()
{
	std::cout << "surname:";
	std::getline(std::cin, surname);
}

void Contact::SetDarkestSecret()
{
	std::cout << "Secret:";
	std::getline(std::cin, darkestsecret);
}

void Contact::SetPhonenumber()
{
	int x;
	int i;

	x = 0;
	while (x != 1)
	{
	std::cout << "Phne number:";
	std::getline(std::cin, phonenumber);
	for (i = 0;phonenumber[i]; i++)
	{
		if (phonenumber[i] < '0' || phonenumber[i] > '9')
		{
			std::cout << "Not valid Phonenumber please retry\n";
			break;
		}
	}
	if (phonenumber[i - 1] >= '0' && phonenumber[i - 1] <= '9')
	{
		x = 1;
	}
	}
}

void Contact::SetAllContact()
{
	SetContactFirstname();
	SetcontactLastname();
	SetContactSurname();
	SetDarkestSecret();
	SetPhonenumber();
}

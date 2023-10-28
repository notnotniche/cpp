/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:55:20 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/28 16:29:02 by nklingsh         ###   ########.fr       */
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
int main()
{
	Contact Stan;
}
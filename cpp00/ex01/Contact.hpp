/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:43:33 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 17:13:31 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		void Printvalue();
		void SetContactFirstname();
		void SetcontactLastname();
		void SetContactSurname();
		void SetPhonenumber();
		void SetDarkestSecret();
		void SetAllContact();
	private:
		std::string firstname;
		std::string lastname;
		std::string surname;
		std::string	phonenumber;
		std::string darkestsecret;
};

#endif

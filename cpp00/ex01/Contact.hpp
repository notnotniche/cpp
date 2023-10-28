/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:43:33 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/28 16:26:46 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

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
	private:
		std::string firstname;
		std::string lastname;
		std::string surname;
		int			phonenumber;
		std::string darkestsecret;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:54:43 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 18:17:46 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"

class Phonebook
{
	public : 
		Phonebook(int size)
		{
			contacts = new Contact[size];
		};
		~Phonebook()
		{
			delete[] contacts;
		};
		void AddContact();
		void Init();
	private :
		Contact *contacts;
		int		currentsize;
		
	
	
};
#endif
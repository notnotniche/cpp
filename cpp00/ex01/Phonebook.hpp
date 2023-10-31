/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:54:43 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/31 16:29:20 by nklingsh         ###   ########.fr       */
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
		Phonebook(int size): maxsize(size), currentsize(0)
		{
			contacts = new Contact[size];
		};
		~Phonebook()
		{
			delete[] contacts;
		};
		void AddContact();
	private :
		Contact *contacts;
		int		maxsize = 8;
		int		currentsize;
		
	
	
};
#endif
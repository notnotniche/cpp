/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:46:01 by nklingsh          #+#    #+#             */
/*   Updated: 2023/10/28 13:43:40 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)		
{	
	char c;
	for (int i = 1; i < argc; i++)
	{
		for (int y = 0; y < argv[i][y]; y++)
		{
			c = toupper(argv[i][y]);
			std::cout << c;
		}
	}
	return (0);
}
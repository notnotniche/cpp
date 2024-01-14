/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:18:02 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/14 18:04:17 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string myString = "HI THIS IS BRAIN";
    std::string* stringPTR = &myString;
    std::string& stringREF = myString;

    std::cout << "Adresse de la string en mémoire: " << &myString << std::endl;
    std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

    std::cout << "Valeur de la string: " << myString << std::endl;
    std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;

	return (0);
}

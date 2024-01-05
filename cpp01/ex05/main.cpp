/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:20 by nklingsh          #+#    #+#             */
/*   Updated: 2023/12/07 15:13:23 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Harl.hpp"

int main()
{
	Harl Hal;
	std::cout << "report to HAL , LEVEL OF CONDUCT : DEBUG" << std::endl;
	Hal.complain("DEBUG");
	std::cout << "report to HAL , LEVEL OF CONDUCT : INFO" << std::endl;
	Hal.complain("INFO");
	std::cout << "report to HAL , LEVEL OF CONDUCT : WARNING" << std::endl;
	Hal.complain("WARNING");
	std::cout << "report to HAL , LEVEL OF CONDUCT : ERROR" << std::endl;
	Hal.complain("ERROR");
	Hal.complain("lol");
	return (0);
}
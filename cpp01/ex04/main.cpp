/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:20 by nklingsh          #+#    #+#             */
/*   Updated: 2023/11/22 19:46:29 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
	std::string filename;
	std::string outfilename;
	std::ifstream infile;
	std::ofstream newfile;
	std::string  line;

	if (argc != 4)
		return (std::cout << "Invalid number of arguments " << std::endl , 1);
	
	filename = argv[1];
	outfilename = filename + ".replace";
	infile.open(filename.c_str());
	if (infile.is_open() == false)
		return (std::cout << "Open infile failed" << std::endl , 1);
	newfile.open(outfilename.c_str());
	if (newfile.is_open() == false)
		return (std::cout << "Open / Creation of new file failed" << std::endl , 1);
	std::getline(infile, line, '\0');
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::cout << line.length() << std::endl ;
	for (size_t i = 0; i < line.length(); i++)
	{
		if (i == line.find(s1 , i))
		{
			line.erase(i, s1.length());
			line.insert(i, s2);
			i = i + s2.length();
		}
	}
	newfile << line;
	infile.close();
	newfile.close();
	return (0);
}
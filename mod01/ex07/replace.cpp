/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:34:51 by pramella          #+#    #+#             */
/*   Updated: 2020/06/25 17:28:41 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char *av[])
{
	// ERROR CHECKING
	if (ac != 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0) {
		std::cerr << "Usage:" << std::endl << "./replace <filename> <s1> <s2>" << std::endl;
		std::cerr << "arguments cannot be empty." << std::endl;
		return (1);
	}
	// SETUP STREAMS & VARIABLES
	std::string line;
	std::string filename(av[1]);
	size_t len = strlen(av[2]);
	size_t skip_len = strlen(av[3]);
	std::ifstream infile(filename);
	if (!infile.is_open()) {
		std::cerr << filename << " could not be opened!" << std::endl;
		return (1);
	}
	std::ofstream outfile(filename += ".REPLACE");
	// READ & REPLACE & WRITE
	while (std::getline (infile, line)) {
		for (size_t pos = 0; (pos = line.find(av[2], pos)) != std::string::npos;) {
			line.replace(pos, len, av[3]);
			pos += skip_len;
		}
		outfile << line << std::endl;
	}
	return (0);
}

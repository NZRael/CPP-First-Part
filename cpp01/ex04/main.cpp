/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:11:14 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/29 11:11:14 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Error : invalid arguments (need 1 filename and 2 strings)" << std::endl, 1);

	std::string	s1(argv[2]);
	if (s1 == "")
		return (std::cout << "Error : first string is empty" << std::endl, 1);

	std::string	s2(argv[3]);
	if (s2 == "")
		return (std::cout << "Error : second string is empty" << std::endl, 1);

	std::ifstream	file(argv[1]);
	if (!file.is_open())
		return (std::cout << "Error : infile couldn't be open" << std::endl, 1);

	std::string	destfilestr = std::string(argv[1]) + ".replace";
	const char	*destfile = destfilestr.c_str();
	std::ofstream	outfile(destfile);
	if (!outfile.is_open())
		return (std::cout << "Error : outfile couldn't be open" << std::endl, 1);

	std::string	line;
	while (std::getline(file >> std::ws, line))
	{
		size_t		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		outfile << line << "\n";
	}
	return (0);
}

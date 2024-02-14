/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:47:05 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/03 14:47:05 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = -1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv && argv[++j])
	{
		i = -1;
		while (j > 0 && argv[j][++i])
		std::cout << (char)std::toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return 0;
}

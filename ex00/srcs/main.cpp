/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:40:20 by miltavar          #+#    #+#             */
/*   Updated: 2025/11/26 14:58:41 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			argv[i][j] = std::toupper((unsigned char)argv[i][j]);
		std::cout << argv[i];
		if (i + 1 < argc)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}

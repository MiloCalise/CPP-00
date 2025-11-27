/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:35:53 by miltavar          #+#    #+#             */
/*   Updated: 2025/11/27 15:08:08 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int	main(void)
{
	Phonebook	book;
	std::string	str;

	while (1)
	{
		std::cout << "Phonebook: ";
		getline(std::cin, str);
		if (str.empty())
		{
			std::cerr << "empty field" << std::endl;
			continue ;
		}
		else if (str == "ADD")
			book.add_contact();
		else if (str == "SEARCH")
			book.search_contact();
		else if (str == "EXIT")
			break ;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:08:17 by miltavar          #+#    #+#             */
/*   Updated: 2025/11/27 15:12:20 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	_index = 0;
}

Phonebook::~Phonebook(void)
{

}

int	strtoint(std::string str)
{
	std::istringstream	iss(str);
	int	res;
	iss >> res;
	return (res);
}

std::string	inttostr(int i)
{
	std::ostringstream	oss;
	oss << i;
	return oss.str();
}

void	Phonebook::add_contact(void)
{
	Contact	newc;
	if (newc.fill_contact() == 1)
		return ;
	contacts[_index] = newc;
	_index = (_index + 1) % 8;
}

void	Phonebook::display_line(int i) const
{
	std::string	tmp = contacts[i].get_first();

	std::cout << "         " + inttostr(i + 1) + "|";
	if (tmp.size() > 10)
		std::cout << tmp.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << tmp << "|";
	tmp = contacts[i].get_last();
	if (tmp.size() > 10)
		std::cout << tmp.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << tmp << "|";
	tmp = contacts[i].get_nick();
	if (tmp.size() > 10)
		std::cout << tmp.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << tmp << "|";
}

void	Phonebook::display_list(void) const
{
	std::cout << "     index|first name| last name|    number" << std::endl;
	for (int i = 0; i < _index; i++)
	{
		display_line(i);
		std::cout << std::endl;
	}
}

void	Phonebook::display_contact(int i) const
{
	std::cout << "first name: " << contacts[i - 1].get_first() << std::endl;
	std::cout << "last name: " << contacts[i - 1].get_last() << std::endl;
	std::cout << "nickname: " << contacts[i - 1].get_nick() << std::endl;
	std::cout << "phone number: " << contacts[i - 1].get_phone() << std::endl;
	std::cout << "darkest secret: " << contacts[i - 1].get_secret() << std::endl;
}

void	Phonebook::search_contact(void) const
{
	std::string	str;
	int	index;

	display_list();
	std::cout << "SEARCH: ";
	getline(std::cin, str);
	index = strtoint(str);
	if (index < 1 || index > _index)
	{
		std::cerr << "invalid index" << std::endl;
		return ;
	}
	display_contact(index);
}

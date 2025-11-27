/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:33:54 by miltavar          #+#    #+#             */
/*   Updated: 2025/11/27 15:07:57 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_first(std::string str)
{
	_first = str;
}

void	Contact::set_last(std::string str)
{
	_last = str;
}

void	Contact::set_nick(std::string str)
{
	_nick = str;
}

void	Contact::set_phone(std::string str)
{
	_phone = str;
}

void	Contact::set_secret(std::string str)
{
	_secret = str;
}

std::string	Contact::get_first(void) const
{
	return (_first);
}

std::string	Contact::get_last(void) const
{
	return (_last);
}

std::string	Contact::get_nick(void) const
{
	return (_nick);
}

std::string	Contact::get_phone(void) const
{
	return (_phone);
}

std::string	Contact::get_secret(void) const
{
	return (_secret);
}

int	Contact::fill_contact(void)
{
	std::cout << "enter first name: ";
	getline(std::cin, _first);
	if (_first.empty())
	{
		std::cerr << "empty field" << std::endl;
		return (1);
	}
	std::cout << "enter last name: ";
	getline(std::cin, _last);
	if (_last.empty())
	{
		std::cerr << "empty field" << std::endl;
		return (1);
	}
	std::cout << "enter nickname: ";
	getline(std::cin, _nick);
	if (_nick.empty())
	{
		std::cerr << "empty field" << std::endl;
		return (1);
	}
	std::cout << "enter phone number: ";
	getline(std::cin, _phone);
	if (_phone.empty())
	{
		std::cerr << "empty field" << std::endl;
		return (1);
	}
	std::cout << "enter darkest secret: ";
	getline(std::cin, _secret);
	if (_secret.empty())
	{
		std::cerr << "empty field" << std::endl;
		return (1);
	}
	return (0);
}

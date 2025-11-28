/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:49:12 by miltavar          #+#    #+#             */
/*   Updated: 2025/11/27 17:39:11 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class	Contact
{
	public:

		void	set_first(std::string str);
		void	set_last(std::string str);
		void	set_nick(std::string str);
		void	set_phone(std::string str);
		void	set_secret(std::string str);
		int	fill_contact();

		std::string	get_first() const;
		std::string	get_last() const;
		std::string	get_nick() const;
		std::string	get_phone() const;
		std::string	get_secret() const;

	private:

		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_phone;
		std::string	_secret;

};

#endif

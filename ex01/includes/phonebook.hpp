/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:08:07 by miltavar          #+#    #+#             */
/*   Updated: 2025/11/28 11:24:16 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class	Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);
		Contact	contacts[8];
		void	add_contact();
		void	search_contact() const;

		private:

		void	display_list() const;
		void	display_contact(int index) const;
		void	display_line(int i) const;
		int	_index;
		int	_count;
};

#endif

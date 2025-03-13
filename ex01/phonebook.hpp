/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:00:04 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/13 17:17:44 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define YELLOW "\033[33m"
# define PINK "\033[35m"
# define RESET "\033[0m"

#include "contact.hpp"

class Phonebook
{
	private:
			Contact contacts[8];
			int		contact_count;
			int		oldest_contact;
	public:
			Phonebook();
			void add_contact(Contact new_contact);
			int get_contact_count() const;
			Contact get_contact(int i);
			std::string truncate(const std::string& str) const;
			void display_contact(const Contact& contact) const;
};

#endif
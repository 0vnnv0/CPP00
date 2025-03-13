/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:52:24 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/13 17:28:46 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() : contact_count(0), oldest_contact(0) {}

void	Phonebook::add_contact(Contact newContact)
{
	if (contact_count < 8)
	{
		contacts[contact_count] = newContact;
		contact_count++;
	}
	else
	{
		contacts[oldest_contact] = newContact;
		oldest_contact = (oldest_contact + 1) % 8;
	}
}

int Phonebook::get_contact_count() const
{
	return (contact_count);
}

Contact	Phonebook::get_contact(int i)
{
	return (contacts[i]);
}

std::string Phonebook::truncate(const std::string& str) const
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return (str);
}

void Phonebook::display_contact(const Contact& contact) const
{
	std::cout << PINK << "First name: " << RESET << contact.get_first_name() << std::endl;
	std::cout << PINK << "Last name: " << RESET << contact.get_last_name() << std::endl;
	std::cout << PINK << "Nickname: " << RESET << contact.get_nickname() << std::endl;
	std::cout << PINK << "Phone number: " << RESET << contact.get_phone_nr() << std::endl; 
	std::cout << PINK << "Darkest secret: " << RESET << contact.get_secret() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:48:45 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/13 17:10:06 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_first_name(std::string name)
{
	first_name = name;
}

void	Contact::set_last_name(std::string name)
{
	last_name = name;
}
void	Contact::set_nickname(std::string name)
{
	nickname = name;
}
void	Contact::set_phone_nr(std::string nr)
{
	phone_number = nr;
}
void	Contact::set_secret(std::string secret)
{
	darkest_secret = secret;
}

std::string Contact::get_first_name() const
{
	return (first_name);
}

std::string Contact::get_last_name() const
{
	return (last_name);
}

std::string Contact::get_nickname() const
{
	return (nickname);
}

std::string Contact::get_phone_nr() const
{
	return (phone_number);
}

std::string Contact::get_secret() const
{
	return (darkest_secret);
}

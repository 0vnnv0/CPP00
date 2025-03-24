/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:31:42 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 16:04:52 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
public:
	void set_first_name(std::string name);
	void set_last_name(std::string name);
	void set_nickname(std::string name);
	void set_phone_nr(std::string nr);
	void set_secret(std::string secret);
	
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_nr() const;
	std::string get_secret() const;
};

#endif
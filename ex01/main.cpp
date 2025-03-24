/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:12:16 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 16:08:29 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	ft_add(Phonebook *book)
{
	Contact	newContact;
	std::string	input;
	
	std::cout << "\033[34mFirst name: \033[0m";
	std::getline(std::cin, input);
	newContact.set_first_name(input);
	std::cout << "\033[34mLast name: \033[0m";
	std::getline(std::cin, input);
	newContact.set_last_name(input);
	std::cout << "\033[34mNickname: \033[0m";
	std::getline(std::cin, input);
	newContact.set_nickname(input);
	std::cout << "\033[34mPhone numer: \033[0m";
	std::getline(std::cin, input);
	newContact.set_phone_nr(input);
	std::cout << "\033[34mDarkest secret: \033[0m";
	std::getline(std::cin, input);
	newContact.set_secret(input);
	book->add_contact(newContact);
	std::cout << "\033[92mContact added!\n\033[0m";
}

void	ft_search(Phonebook *book)
{
	int			index;
	std::string input;
	
	if (book->get_contact_count() == 0)
	{
		std::cout << "\033[31mPhonebook is empty!\n\033[0m";
		return ;
	}
	std::cout << YELLOW << std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|" 
		<< std::setw(10) << "last name" << "|" 
		<< std::setw(10) << "nickname" << "|" << RESET << std::endl;
	for (int i = 0; i < book->get_contact_count(); i++)
	{
		std::cout << std::setw(10) << i << "|" 
		<< std::setw(10) << book->truncate(book->get_contact(i).get_first_name()) 
		<< "|" << std::setw(10) << book->truncate(book->get_contact(i).get_last_name()) 
		<< "|" << std::setw(10) << book->truncate(book->get_contact(i).get_nickname()) 
		<< "|" << std::endl;
	}
	std::cout << "\033[36mEnter the index of the contact to view: \033[0m";
	std::getline(std::cin, input);
	std::istringstream iss(input);
	if (iss >> index && iss.eof())
	{
		if (index >= 0 && index < book->get_contact_count())
			book->display_contact(book->get_contact(index));
		else
			std::cout << "\033[31mInvalid index! Try again!\n\033[0m";
	}
	else
		std::cout << "\033[31mInvalid Index! Try again!\n\033[0m";
}

int	main()
{
	Phonebook	book;
	std::string	command;
	
	while (true)
	{
		std::cout << "\033[36mEnter command (ADD/SEARCH/EXIT): \033[0m";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			ft_add(&book);
		else if (command == "SEARCH")
		{
			ft_search(&book);
		}
		else
			std::cout << "\033[31mProgram only accepts ADD, SEARCH and EXIT!\033[0m" << std::endl;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:35:11 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 14:16:38 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	
	if (argc > 1)
	{
		while (i < argc)
		{
			std::string str(argv[i]);
			for (std::string::iterator it = str.begin(); it < str.end(); it++)
			{
				*it = std::toupper(*it);
			}
			std::cout << str;
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

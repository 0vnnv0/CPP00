# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 16:11:02 by anschmit          #+#    #+#              #
#    Updated: 2025/03/13 17:18:04 by anschmit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phonebook.cpp main.cpp contact.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

.PHONY: all clean
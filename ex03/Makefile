# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/17 13:22:18 by dhuss             #+#    #+#              #
#    Updated: 2025/03/18 14:04:21 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++17 -g
CPPFILES = main.cpp\
	AMateria.cpp\
	MateriaSource.cpp\
	Cure.cpp\
	Ice.cpp\
	Character.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = ex03

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
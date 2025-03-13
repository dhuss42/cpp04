# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 14:50:06 by dhuss             #+#    #+#              #
#    Updated: 2025/03/13 14:56:11 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++17
CPPFILES = main.cpp\
	Animal.cpp\
	Dog.cpp\
	Cat.cpp\
	WrongAnimal.cpp\
	WrongCat.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Polymorphism

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
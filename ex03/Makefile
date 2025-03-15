CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++17
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
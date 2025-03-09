CC = c++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	Animal.cpp\
	Dog.cpp\
	Cat.cpp
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
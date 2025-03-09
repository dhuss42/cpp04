CC = c++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	Animal.cpp\
	Dog.cpp\
	Cat.cpp\
	WrongAnimal.cpp\
	WrongCat.cpp\
	Brain.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = I_don_t_want_to_set_the_world_on_fire

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
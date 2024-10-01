NAME	=	Poly

CFLAGS	=	-Wall -Wextra -Werror -std=c++11

FILES	=	main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

CC		=	c++

FtoO	=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME):	$(FtoO)
	@echo "compiling"
	@$(CC) $(CFLAGS) $(FtoO) -o $(NAME)
	@echo "compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(FtoO)

fclean: clean
	$(RM) $(NAME) $(FtoO)

re: fclean $(NAME)

.PHONY: all clean fclean re
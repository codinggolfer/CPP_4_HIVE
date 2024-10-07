NAME	=	Materia

CFLAGS	=	-Wall -Wextra -Werror -std=c++11 #-g #-fsanitize=address

FILES	=	main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

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
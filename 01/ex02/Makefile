FLAGS= -Wall -Wextra -Werror
SRC=	main.cpp
OBJ=	$(SRC:.cpp=.o)
NAME=	BRAIN

all:	$(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o:	%.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
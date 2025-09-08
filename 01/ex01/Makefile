FLAGS=	-Wall -Wextra -Werror -fsanitize=address -g3
NAME=	Zombie
SRC=	main.cpp Zombie.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	@$ c++ $(FLAGS) -c $< -o $@

clean:
	@$ rm -f $(OBJ)

fclean: clean
	@$ rm -f $(NAME)

re: fclean all

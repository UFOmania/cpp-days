FLAGS=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
NAME=	Account
SRC=	Account.cpp tests.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Account.hpp
	@$ c++ $(FLAGS) -c $< -o $@

clean:
	@$ rm -f $(OBJ)

fclean: clean
	@$ rm -f $(NAME)

re: fclean all

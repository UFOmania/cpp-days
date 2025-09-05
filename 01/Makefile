FLAGS=	-Wall -Wextra -Werror -fsanitize=address -g3
NAME=	PhoneBook
SRC=	contact.cpp	main.cpp PhoneBook.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c PhoneBook.hpp Contact.hpp
	@$ c++ $(FLAGS) -c $< -o $@

clean:
	@$ rm -f $(OBJ)

fclean: clean
	@$ rm -f $(NAME)

re: fclean all

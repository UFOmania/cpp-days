FLAGS=	-Wall -Wextra -Werror -std=c++98
SRC=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ=	$(SRC:.cpp=.o)
NAME=	violence

all: $(NAME)

$(NAME):	$(OBJ)
	echo $(OBJ)
	@$ c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o:	%.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	@$ c++ $(FLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
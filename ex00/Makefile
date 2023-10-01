Name = ClapTrap

SRC = main.cpp ClapTrap.cpp

HEADERS = ClapTrap.hpp

CC = c++ -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(OBJ) -o $(Name)

%.o: %.cpp $(HEADERS)
	$(CC) -c $< -o $@

clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(Name)

re: fclean all

.PHONY: all clean fclean re
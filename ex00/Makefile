CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombie
SRC = Zombie.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

# Targets
all: $(NAME) 

# Compile program 1
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and executables
clean:
	rm -f $(OBJ0) $(OBJ1)

fclean: clean
	rm -f $(NAME0) $(NAME1)

re: fclean all


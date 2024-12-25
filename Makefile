CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

# Program 0 (Zombie)
NAME0 = Zombie
SRC0 = ex00/Zombie.cpp ex00/main.cpp ex00/newZombie.cpp ex00/randomChump.cpp
OBJ_DIR0 = ex00/bin
OBJ0 = $(SRC0:ex00/%.cpp=$(OBJ_DIR0)/%.o)

# Program 1 (ZombieHorde)
NAME1 = ZombieHorde
SRC1 = ex01/Zombie.cpp ex01/main.cpp ex01/ZombieHorde.cpp
OBJ_DIR1 = ex01/bin
OBJ1 = $(SRC1:ex01/%.cpp=$(OBJ_DIR1)/%.o)

# Program 2 (Main)
NAME2 = main
SRC2 = ex02/main.cpp
OBJ_DIR2 = ex02/bin
OBJ2 = $(SRC2:ex02/%.cpp=$(OBJ_DIR2)/%.o)

# Program 3 (Violence)
NAME3 = violence
SRC3 = ex03/main.cpp ex03/HumanA.cpp ex03/HumanB.cpp ex03/Weapon.cpp
OBJ_DIR3 = ex03/bin
OBJ3 = $(SRC3:ex03/%.cpp=$(OBJ_DIR3)/%.o)

# Program 4 (Replace)
NAME4 = replace
SRC4 = ex04/main.cpp ex04/Replace.cpp
OBJ_DIR4 = ex04/bin
OBJ4 = $(SRC4:ex04/%.cpp=$(OBJ_DIR4)/%.o)

# Program 5 (Harl)
NAME5 = harl
SRC5 = ex05/main.cpp ex05/Harl.cpp
OBJ_DIR5 = ex05/bin
OBJ5 = $(SRC5:ex05/%.cpp=$(OBJ_DIR5)/%.o)

# Build All Programs
all: $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

# Compile Program 0
$(NAME0): $(OBJ0)
	@mkdir -p $(OBJ_DIR0)
	$(CC) $(CFLAGS) $(OBJ0) -o $(NAME0)

# Compile Program 1
$(NAME1): $(OBJ1)
	@mkdir -p $(OBJ_DIR1)
	$(CC) $(CFLAGS) $(OBJ1) -o $(NAME1)

# Compile Program 2
$(NAME2): $(OBJ2)
	@mkdir -p $(OBJ_DIR2)
	$(CC) $(CFLAGS) $(OBJ2) -o $(NAME2)

# Compile Program 3
$(NAME3): $(OBJ3)
	@mkdir -p $(OBJ_DIR3)
	$(CC) $(CFLAGS) $(OBJ3) -o $(NAME3)

# Compile Program 4
$(NAME4): $(OBJ4)
	@mkdir -p $(OBJ_DIR4)
	$(CC) $(CFLAGS) $(OBJ4) -o $(NAME4)

# Compile Program 5
$(NAME5): $(OBJ5)
	@mkdir -p $(OBJ_DIR5)
	$(CC) $(CFLAGS) $(OBJ5) -o $(NAME5)

# Rules to compile .cpp to .o
$(OBJ_DIR0)/%.o: ex00/%.cpp
	@mkdir -p $(OBJ_DIR0)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR1)/%.o: ex01/%.cpp
	@mkdir -p $(OBJ_DIR1)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR2)/%.o: ex02/%.cpp
	@mkdir -p $(OBJ_DIR2)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR3)/%.o: ex03/%.cpp
	@mkdir -p $(OBJ_DIR3)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR4)/%.o: ex04/%.cpp
	@mkdir -p $(OBJ_DIR4)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR5)/%.o: ex05/%.cpp
	@mkdir -p $(OBJ_DIR5)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR0) $(OBJ_DIR1) $(OBJ_DIR2) $(OBJ_DIR3) $(OBJ_DIR4) $(OBJ_DIR5)

fclean: clean
	rm -f $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

re: fclean all

# Compile Individual Programs
0: $(NAME0)
1: $(NAME1)
2: $(NAME2)
3: $(NAME3)
4: $(NAME4)
5: $(NAME5)

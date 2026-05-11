NAME = I_dont_want_to_set_the_world_on_fire
CC = g++
CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRC =	    src/main.cpp \
			src/Animal.cpp \
			src/Dog.cpp \
			src/Cat.cpp \
			src/Brain.cpp

OBJS = $(notdir $(SRC:.cpp=.o))
OBJDIR = I_dont_want_to_set_the_world_on_fire_objects

all: $(OBJDIR) $(NAME)

$(NAME): $(addprefix $(OBJDIR)/, $(OBJS))
	$(CC) $(CFLAGS) -o $@ $(addprefix $(OBJDIR)/, $(OBJS))

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME = My_First_Class_in_Orthodox_Canonical_Form

SRC = main.cpp Fixed.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "objs removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "program removed"

re: fclean make

.PHONY: all clean fclean re
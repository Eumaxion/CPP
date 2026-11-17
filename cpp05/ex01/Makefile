NAME = PhoneBook

SRC = main.cpp PhoneBook.cpp Contacts.cpp

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
	@echo "objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "executable removed"

re: fclean make

.PHONY: all clean fclean re
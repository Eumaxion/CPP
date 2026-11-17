# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 20:14:09 by mlima-si          #+#    #+#              #
#    Updated: 2026/09/23 20:14:10 by mlima-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

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

re: fclean all

.PHONY: all clean fclean re
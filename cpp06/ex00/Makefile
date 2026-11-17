# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/17 18:33:37 by mlima-si          #+#    #+#              #
#    Updated: 2026/09/17 18:33:38 by mlima-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -g -std=c++98

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
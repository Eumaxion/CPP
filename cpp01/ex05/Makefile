# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/21 22:02:54 by mlima-si          #+#    #+#              #
#    Updated: 2026/09/21 22:02:55 by mlima-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0

SRC = main.cpp Harl.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 06:51:34 by bkaztaou          #+#    #+#              #
#    Updated: 2023/08/18 06:51:11 by bkaztaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ./src/*.c)
UTILS = $(wildcard ./utils/*.c)
RULES = $(wildcard ./rules/*.c)

FILES = $(SRC) $(UTILS) $(RULES)

OBJ = $(FILES:.c=.o)

RM = rm -rf

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


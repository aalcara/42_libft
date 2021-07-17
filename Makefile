# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 21:35:57 by aalcara-          #+#    #+#              #
#    Updated: 2021/07/16 21:29:27 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(shell find *.c)

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(SRCS) libft.h
		@gcc $(FLAGS) -c $(SRCS)
		@ar rc $(NAME) $(OBJ)
		@echo "** $(NAME) made! **"

clean: oclean
		@echo "!! libft .o files deleted! !!"

oclean:
		@rm -f $(OBJ)

fclean:	oclean
		@rm -f $(NAME)
		@echo "!! [$(NAME)] deleted! !!"

re:	fclean all

.PHONY: all, clean, fclean, re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 21:35:57 by aalcara-          #+#    #+#              #
#    Updated: 2021/07/16 13:17:54 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_calloc.c ft_isascii.c ft_memccpy.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_toupper.c \
		ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c \
		ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
		ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putchr.c ft_hexa_len.c ft_num_len.c ft_free.c

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 09:16:40 by tnagumo           #+#    #+#              #
#    Updated: 2021/11/21 23:19:15 by tnagumo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  libft/ft_putnbr_base.c \
	  libft/ft_vprintf_c.c \
	  libft/ft_vprintf_di.c \
	  libft/ft_vprintf_p.c \
	  libft/ft_vprintf_s.c \
	  libft/ft_vprintf_uxX.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror


$(NAME): $(OBJ)
	$(AR) r $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/15 14:41:43 by ntshuma           #+#    #+#              #
#    Updated: 2026/07/22 22:06:56 by ntshuma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I libft
SRCS		= ft_printf.c print_char.c print_str.c print_nb.c print_unsigned.c print_hex.c print_ptr.c
OBJS		= $(SRCS:.c=.o)

all : libft $(NAME)

libft : 
		make -C libft

$(NAME): $(OBJS)
		ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o$@

clean :
		$(RM) $(OBJS)
		make -c libft clean

fclean : clean
		$(RM) $(NAME)
		make -c libft fclean

re : fclean all

.PHONY: all clean fclean re

.SILENT:
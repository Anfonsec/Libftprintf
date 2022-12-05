# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anfonsec <anfonsec@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 14:09:38 by anfonsec          #+#    #+#              #
#    Updated: 2022/12/05 16:23:23 by anfonsec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_printf.c \
		ft_printf_chars.c \
		ft_print_hex.c \
		ft_printf_numbers.c \

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

CC	= clang

$(NAME): ${OBJ}
		ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
		rm ${OBJ}

fclean: clean
		rm - f ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader ${SRC}
	norminette -R CheckDefine *.h

.PHONY: all clean fclean re
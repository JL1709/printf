# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jludt <jludt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:51:20 by jludt             #+#    #+#              #
#    Updated: 2021/07/08 12:53:14 by jludt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
		ft_print_conversion.c \
		ft_print_char.c \
		ft_print_string.c \
		ft_print_int.c \
		ft_print_uint.c \
		ft_print_hexadecimal.c \
		ft_print_ptr.c \
		./Libft/ft_itoa.c \
		./Libft/ft_uitoa.c \
		./Libft/ft_putnbr_base.c \
		./Libft/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror ${SRC}
	ar cr $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re

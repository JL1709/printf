# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julian <julian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:51:20 by jludt             #+#    #+#              #
#    Updated: 2021/07/07 16:15:59 by julian           ###   ########.fr        #
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
		./Libft/ft_itoa.c \
		./Libft/ft_uitoa.c \
		./Libft/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror ${SRC}
	#ar cr $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re

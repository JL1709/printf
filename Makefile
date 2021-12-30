# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julian <julian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 09:51:20 by jludt             #+#    #+#              #
#    Updated: 2021/12/30 12:11:23 by julian           ###   ########.fr        #
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
		ft_print_ptr.c 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	${MAKE} -C Libft/
	ar cr $(NAME) *.o Libft/*.o


clean:
	rm -f *.o Libft/*.o

fclean: clean
	rm -f $(NAME) Libft/libft.a

re : fclean all

.PHONY: all clean fclean re

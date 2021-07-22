/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:51:38 by jludt             #+#    #+#             */
/*   Updated: 2021/07/22 17:20:53 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct s_print
{
	va_list	ap;
	int		total_length;
}			t_print;

int		ft_printf(const char *format, ...);
int		ft_print_conversion(const char *f, t_print *tab, int i);
void	ft_print_char(t_print *tab);
void	ft_print_string(t_print *tab);
void	ft_print_int(t_print *tab);
void	ft_print_uint(t_print *tab);
void	ft_print_hexadecimal(t_print *tab, char c);
void	ft_print_ptr(t_print *tab);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:51:38 by jludt             #+#    #+#             */
/*   Updated: 2021/07/23 09:27:02 by jludt            ###   ########.fr       */
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

typedef struct s_printf
{
	va_list	ap;
	int		total_length;
}			t_printf;

int		ft_printf(const char *format, ...);
int		ft_print_conversion(const char *f, t_printf *data, int i);
void	ft_print_char(t_printf *data);
void	ft_print_string(t_printf *data);
void	ft_print_int(t_printf *data);
void	ft_print_uint(t_printf *data);
void	ft_print_hexadecimal(t_printf *data, char c);
void	ft_print_ptr(t_printf *data);

#endif

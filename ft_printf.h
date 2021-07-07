/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:51:38 by jludt             #+#    #+#             */
/*   Updated: 2021/07/07 16:14:38 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_print
{
	va_list	args;
	int		total_length;
}			t_print;

int		ft_printf(const char *format, ...);
int		ft_print_conversion(const char *f, t_print *tab, int i);
void	ft_print_char(t_print *tab);
void	ft_print_string(t_print *tab);
void	ft_print_int(t_print *tab);
void	ft_print_uint(t_print *tab);
void	ft_print_hexadecimal(t_print *tab);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
size_t	ft_strlen(const char *s);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:20:19 by julian            #+#    #+#             */
/*   Updated: 2021/07/09 11:38:22 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conversion(const char *format, t_print *tab, int i)
{
	if (format[i] == 'c')
		ft_print_char(tab);
	if (format[i] == 's')
		ft_print_string(tab);
	if (format[i] == 'p')
		ft_print_ptr(tab);
	if (format[i] == 'i' || format[i] == 'd')
		ft_print_int(tab);
	if (format[i] == 'u')
		ft_print_uint(tab);
	if (format[i] == 'x' || format[i] == 'X')
		ft_print_hexadecimal(tab, format[i]);
	if (format[i] == '%')
		ft_print_char(tab);
	return (i);
}

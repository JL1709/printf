/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:20:19 by julian            #+#    #+#             */
/*   Updated: 2021/07/07 16:15:01 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conversion(const char *format, t_print *tab, int i)
{
	if (format[i] == 'c')
		ft_print_char(tab);
	if (format[i] == 's')
		ft_print_string(tab);
	if (format[i] == 'i' || format[i] == 'd')
		ft_print_int(tab);
	if (format[i] == 'u')
		ft_print_uint(tab);
	if (format[i] == 'x' || format[i] == 'X')
		ft_print_hexadecimal(tab);
	if (format[i] == '%')
		tab->total_length += write (1, "%", 1);
	return (i);
}
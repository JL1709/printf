/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:20:19 by julian            #+#    #+#             */
/*   Updated: 2021/07/23 09:12:33 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conversion(const char *format, t_printf *data, int i)
{
	if (format[i] == 'c')
		ft_print_char(data);
	else if (format[i] == 's')
		ft_print_string(data);
	else if (format[i] == 'p')
		ft_print_ptr(data);
	else if (format[i] == 'i' || format[i] == 'd')
		ft_print_int(data);
	else if (format[i] == 'u')
		ft_print_uint(data);
	else if (format[i] == 'x' || format[i] == 'X')
		ft_print_hexadecimal(data, format[i]);
	else if (format[i] == '%')
		data->total_length += write(1, "%", 1);;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:33:20 by jludt             #+#    #+#             */
/*   Updated: 2021/12/30 12:13:49 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** It will manage the following conversions: cspdiuxX%
*/

int	ft_printf(const char *format, ...)
{
	t_printf	*data;
	int			i;
	int			return_value;

	data = (t_printf *)malloc(sizeof(t_printf));
	if (!data)
		return (-1);
	data->total_length = 0;
	va_start(data->ap, format);
	i = 0;
	return_value = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i = ft_print_conversion(format, data, i + 1);
		else
			return_value += write(1, &format[i], 1);
		i++;
	}
	return_value += data->total_length;
	va_end(data->ap);
	free(data);
	return (return_value);
}

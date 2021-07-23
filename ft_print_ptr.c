/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:02:46 by jludt             #+#    #+#             */
/*   Updated: 2021/07/23 09:12:22 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(t_printf *data)
{
	unsigned long	p;
	char			*p_hexadecimal;
	int				i;

	p = (unsigned long)va_arg(data->ap, void *);
	if (!p)
	{
		data->total_length += write(1, "0x0", 3);
		return ;
	}
	p_hexadecimal = ft_putnbr_base(p, "0123456789abcdef");
	data->total_length += write(1, "0x", 2);
	i = 0;
	while (p_hexadecimal[i] != '\0')
		data->total_length += write(1, &p_hexadecimal[i++], 1);
	free(p_hexadecimal);
}

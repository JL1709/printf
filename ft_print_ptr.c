/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:02:46 by jludt             #+#    #+#             */
/*   Updated: 2021/07/08 13:12:22 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(t_print *tab)
{
	unsigned long	p;
	char			*p_hexadecimal;
	int				i;

	p = (unsigned long)va_arg(tab->args, void *);
	p_hexadecimal = ft_putnbr_base(p, "0123456789abcdef");
	tab->total_length += write(1, "0x", 2);
	i = 0;
	while (p_hexadecimal[i] != '\0')
		tab->total_length += write(1, &p_hexadecimal[i++], 1);
}

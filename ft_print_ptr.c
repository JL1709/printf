/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:02:46 by jludt             #+#    #+#             */
/*   Updated: 2021/07/19 11:05:14 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(t_print *tab)
{
	unsigned long	p;
	char			*p_hexadecimal;
	int				i;

	p = (unsigned long)va_arg(tab->ap, void *);
	if (!p)
	{
		tab->total_length += write(1, "0x0", 3);
		return ;
	}
	p_hexadecimal = ft_putnbr_base(p, "0123456789abcdef");
	tab->total_length += write(1, "0x", 2);
	i = 0;
	while (p_hexadecimal[i] != '\0')
		tab->total_length += write(1, &p_hexadecimal[i++], 1);
}

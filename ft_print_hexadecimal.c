/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:44:00 by julian            #+#    #+#             */
/*   Updated: 2021/07/22 14:37:12 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexadecimal(t_print *tab, char c)
{
	unsigned int	i;
	int				j;
	char			*s_hexadecimal;

	i = va_arg(tab->ap, unsigned int);
	if (i == 0 || !i)
		tab->total_length += write (1, "0", 1);
	else
	{
		if (c == 'X')
			s_hexadecimal = ft_putnbr_base(i, "0123456789ABCDEF");
		else
			s_hexadecimal = ft_putnbr_base(i, "0123456789abcdef");
		j = 0;
		while (s_hexadecimal[j] != '\0')
			tab->total_length += write (1, &s_hexadecimal[j++], 1);
		free(s_hexadecimal);
	}
}

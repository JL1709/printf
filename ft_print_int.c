/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:51:59 by julian            #+#    #+#             */
/*   Updated: 2021/07/22 14:37:22 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_print *tab)
{
	int		i;
	int		j;
	char	*s_int;

	i = va_arg(tab->ap, int);
	if (!i)
	{
		tab->total_length += write (1, "0", 1);
		return ;
	}
	s_int = ft_itoa(i);
	j = 0;
	while (s_int[j] != '\0')
		tab->total_length += write (1, &s_int[j++], 1);
	free(s_int);
}

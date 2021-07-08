/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:51:59 by julian            #+#    #+#             */
/*   Updated: 2021/07/07 15:44:07 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(t_print *tab)
{
	unsigned int	i;
	int 			j;
	char 			*s_uint;

	i = va_arg(tab->args, unsigned int);
	s_uint = ft_uitoa(i);
	j = 0;
	while (s_uint[j] != '\0')
		tab->total_length += write (1, &s_uint[j++], 1);
}
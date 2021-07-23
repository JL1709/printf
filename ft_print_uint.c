/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:51:59 by julian            #+#    #+#             */
/*   Updated: 2021/07/23 09:12:13 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(t_printf *data)
{
	unsigned int	i;
	int				j;
	char			*s_uint;

	i = va_arg(data->ap, unsigned int);
	if (!i)
	{
		data->total_length += write (1, "0", 1);
		return ;
	}
	s_uint = ft_uitoa(i);
	j = 0;
	while (s_uint[j] != '\0')
		data->total_length += write (1, &s_uint[j++], 1);
	free(s_uint);
}

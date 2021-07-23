/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:51:59 by julian            #+#    #+#             */
/*   Updated: 2021/07/23 09:12:26 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_printf *data)
{
	int		i;
	int		j;
	char	*s_int;

	i = va_arg(data->ap, int);
	if (!i)
	{
		data->total_length += write (1, "0", 1);
		return ;
	}
	s_int = ft_itoa(i);
	j = 0;
	while (s_int[j] != '\0')
		data->total_length += write (1, &s_int[j++], 1);
	free(s_int);
}

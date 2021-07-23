/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:37:15 by julian            #+#    #+#             */
/*   Updated: 2021/07/23 09:12:20 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(t_printf *data)
{
	char	*s;
	int		i;

	s = va_arg(data->ap, char *);
	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
		data->total_length += write (1, &s[i++], 1);
}

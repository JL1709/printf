/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:37:15 by julian            #+#    #+#             */
/*   Updated: 2021/07/22 17:27:14 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(t_print *tab)
{
	char	*s;
	int		i;

	s = va_arg(tab->ap, char *);
	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
		tab->total_length += write (1, &s[i++], 1);
}

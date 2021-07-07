/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:37:15 by julian            #+#    #+#             */
/*   Updated: 2021/07/07 16:10:33 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(t_print *tab)
{
	char	*s;
	int		i;

	s = va_arg(tab->args, char *);
	if (!s)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
		tab->total_length += write (1, &s[i++], 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:40:52 by jludt             #+#    #+#             */
/*   Updated: 2021/07/08 13:16:33 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
** Allocates (with malloc(3)) and returns a string
** representing the unsinged integer received as an argument.
** parameters:
** n - the integer to convert.
** return value:
** The string representing the integer. NULL if the
** allocation fails.
*/

static char	*get_number(unsigned int n, int len, char *dest)
{
	dest[len] = '\0';
	len--;
	while (len)
	{
		dest[len--] = '0' + n % 10;
		n = n / 10;
	}
	dest[len] = '0' + n % 10;
	return (dest);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned int	number;
	int				len_n;
	char			*s_int;

	number = n;
	len_n = 0;
	if (n == 0)
		len_n = 1;
	while (number != 0)
	{
		number = number / 10;
		len_n++;
	}
	s_int = malloc(sizeof(char) * len_n + 1);
	if (s_int == NULL)
		return (NULL);
	s_int = get_number(n, len_n, s_int);
	return (s_int);
}

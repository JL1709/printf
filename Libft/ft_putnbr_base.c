/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:56:35 by jludt             #+#    #+#             */
/*   Updated: 2021/07/08 12:47:05 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*reverse(char *reverse, int digits, int memory)
{
	char	*s_hexadecimal;
	int		k;

	s_hexadecimal = (char *)malloc(sizeof(char) + memory + 1);
	if (s_hexadecimal == NULL)
		return (NULL);
	k = 0;
	while (k < digits)
	{
		s_hexadecimal[k] = reverse[digits - k - 1];
		k++;
	}
	s_hexadecimal[digits] = '\0';
	return (s_hexadecimal);
}

char	*ft_putnbr_base(unsigned long nbr, char *base)
{
	unsigned long	nbr_copy;
	int				memory;
	char			*s_reverse;
	int				digits;

	nbr_copy = nbr;
	memory = 0;
	while (nbr_copy != 0)
	{
		nbr_copy = nbr_copy / 16;
		memory++;
	}
	s_reverse = (char *)malloc(sizeof(char) + memory + 1);
	if (s_reverse == NULL)
		return (NULL);
	digits = 0;
	while (nbr != 0)
	{
		s_reverse[digits] = base[nbr % 16];
		nbr = nbr / 16;
		digits++;
	}
	s_reverse[digits] = '\0';
	return (reverse(s_reverse, digits, memory));
}

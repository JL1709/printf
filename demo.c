/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 12:42:04 by julian            #+#    #+#             */
/*   Updated: 2022/01/02 13:29:16 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char c[5] = {'H', 'e', 'l', 'l', 'o'};
	char *src = "world";
	ft_printf("%c%c%c%c%c, %s!\n", c[0], c[1], c[2], c[3], c[4], src);
	
	return (0);
}

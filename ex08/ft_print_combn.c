/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:25:27 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/25 01:42:29 by seonggch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char array[2];

	array[0] = '0';
	while (array[0] <= 99)
	{
		array[1] = array[0] + 1;
		while (array[1] <= 99)
		{
			ft_putchar(48 + array[0] / 10);
			ft_putchar(48 + array[0] % 10);
			ft_putchar(' ');
			ft_putchar(48 + array[1] / 10);
			ft_putchar(48 + array[1] % 10);
			if (array[0] + array[1] != 98 + 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			array[1]++;
		}
		array[0]++;
	}
}

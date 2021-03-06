/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <seonggch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:52:48 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/16 17:53:09 by seonggch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(' ');
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			if (! (a == 98 && b == 99))
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			b++;
		}
		a++;
	}
}

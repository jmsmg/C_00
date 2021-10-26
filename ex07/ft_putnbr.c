/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <seonggch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:51:43 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/26 23:26:58 by seonggch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rec(int nb)
{
	if (nb > 9)
	{
		ft_rec(nb / 10);
		nb = nb % 10 + '0';
		ft_putchar(nb);
	}
	else
	{
		nb = nb + '0';
		ft_putchar(nb);
	}
}

void	ft_putnbr(int nb)
{
	if (0 <= nb && nb <= 9)
	{
		nb = nb + '0';
		ft_putchar(nb);
	}
	else if (9 < nb && nb <= 2147483647)
	{
		ft_rec(nb);
	}
	else if
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		nb = -nb;
		ft_putchar('-');
		ft_rec(nb);
	}
}

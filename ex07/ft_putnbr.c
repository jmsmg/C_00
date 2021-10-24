/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <seonggch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:51:43 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/24 22:22:09 by seonggch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rec(int nb)
{
	if (nb != 0)
	{
		ft_rec(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		return ;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "2147483648", 11);
	}
	else if (nb >= 10)
	{
		ft_rec(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar('-');
		ft_rec((-nb) / 10);
		ft_putchar((-nb) % 10 + 48);
	}
}

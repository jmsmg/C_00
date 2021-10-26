/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:25:27 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/27 00:15:38 by seonggch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int nb, int *array, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
}

void	ft_inc(int nb, int *array)
{
	int	i;
	int	max;

	i = nb - 1;
	max = 9;
	while (array[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	array[i] += 1;
	while (i < nb)
	{
		array[i + 1] = array[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int nb)
{
	int	array[10];
	int	i;

	i = 0;
	while (i < nb)
	{
		array[i] = i;
		i++;
	}
	ft_putout(nb, array, 0);
	while (array[0] != 10 - nb || array[nb - 1] != 9)
	{
		if (array[nb - 1] != 9)
		{
			array[nb - 1] += 1;
		}
		else
		{
			ft_inc(nb, array);
		}
		ft_putout(nb, array, 1);
	}
}

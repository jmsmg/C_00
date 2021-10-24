/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:04:35 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/24 22:07:28 by seonggch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	array[3];

	array[0] = '0';
	while (array[0] <= '7')
	{
		array[1] = array[0] + 1;
		while (array[1] <= '8')
		{
			array[2] = array[1] + 1;
			while (array[2] <= '9')
			{
				write(1, array, 3);
				if (!(array[0] == '7' && array[1] == '8' && array[2] == '9'))
				{
					write(1, ", ", 2);
				}
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
}

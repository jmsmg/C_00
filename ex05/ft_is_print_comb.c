/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_print_comb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggch <seonggch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:59:50 by seonggch          #+#    #+#             */
/*   Updated: 2021/10/18 15:09:01 by seonggch         ###   ########.fr       */
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

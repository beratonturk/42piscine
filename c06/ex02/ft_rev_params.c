/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:46:31 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/23 14:46:43 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;
	int	i;

	c = ac - 1;
	if (ac > 1)
	{
		while (c > 0)
		{
			i = 0;
			while (av[c][i])
			{
				write(1, &av[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}

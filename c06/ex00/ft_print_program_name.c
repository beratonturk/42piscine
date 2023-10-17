/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:42:25 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/23 14:43:13 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac > 0)
	{
		while (av[0][c])
		{
			write(1, &av[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

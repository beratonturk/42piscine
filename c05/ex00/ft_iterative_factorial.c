/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:20:41 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/21 23:22:42 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}

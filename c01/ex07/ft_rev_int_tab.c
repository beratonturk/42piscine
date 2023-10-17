/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:55:02 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/09 12:58:03 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}

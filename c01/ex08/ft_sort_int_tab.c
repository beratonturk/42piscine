/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:59:33 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/09 13:01:09 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		counter;
	int		swap;

	counter = 0;
	while (counter < size - 1)
	{
		if (tab[counter] > tab[counter + 1])
		{
			swap = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = swap;
			counter = 0;
		}
		else
			counter++;
	}
}

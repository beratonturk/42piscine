/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:54:09 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/04 17:15:09 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

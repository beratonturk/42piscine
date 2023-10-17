/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:33:02 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/24 15:34:46 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
			i++;
	}
	str[i] = '\0';
	return (str);
}

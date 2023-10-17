/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:42:36 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/16 15:43:40 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	lenght;

	i = 0;
	lenght = 0;
	while (dest[lenght] != '\0')
		lenght++;
	while (i < nb && src[i] != '\0')
	{
		dest[lenght] = src[i];
		lenght++;
		i++;
	}
	dest[lenght] = '\0';
	return (dest);
}

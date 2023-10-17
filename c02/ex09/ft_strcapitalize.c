/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beonturk <beonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:57:51 by beonturk          #+#    #+#             */
/*   Updated: 2023/02/13 23:58:08 by beonturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	k;

	index = 0;
	k = 0;
	while (str[index] != '\0')
	{
		if (k == 0 && ('a' <= str[index] && str[index] <= 'z'))
		{
			str[index] -= 32;
			k++;
		}
		else if (k > 0 && ('A' <= str[index] && str[index] <= 'Z'))
			str[index] += 32;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			k++;
		else if (str[index] >= 'a' && str[index] <= 'z')
			k++;
		else if (str[index] >= '0' && str[index] <= '9')
			k++;
		else
			k = 0;
		index++;
	}
	return (str);
}

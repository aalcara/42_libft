/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/13 16:29:30 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i[2];

	i[0] = 0;
	i[1] = 0;
	if (*(little + i[0]) == '\0')
	{
		return ((char *)big);
	}
	while (*(big + i[0]) != '\0' && i[0] <= len)
	{
		if (*(big + i[0]) == *(little + i[1]))
		{
			i[1] = i[1] + 1;
			if (*(little + i[1]) == '\0')
			{
				return ((char *)(big + i[0] - i[1] + 1));
			}
		}
		i[0] = i[0] + 1;
		if (*(little + i[1]) != *(big + i[0]))
		{
			i[1] = 0;
		}
	}
	return (NULL);
}

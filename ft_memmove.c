/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:57:48 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/22 15:34:49 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char	temp[n + 1];

	if (!dest && !src)
		return (NULL);
	i = 0;
	temp[0] = 0;
	while (i < n)
	{
		temp[i] = *((const char *)src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = temp[i];
		i++;
	}
	return (dest);
}

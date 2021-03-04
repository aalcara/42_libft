/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:51:37 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/04 11:28:45 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	unsigned long	j;

	j = 0;
	i = ft_strlen(dst);
	while (*(src + j) != '\0' && (i + j + 1) < size)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if ((i + j) < size)
		*(dst + i + j) = '\0';
	while (*(src + j) != '\0')
		j++;
	if (size < i)
	{
		return (size + j);
	}
	return (i + j);
}*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;

	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (*src && dst_len < size -1)
		*(dst + dst_len++) = *src++;
	*(dst + dst_len) = '\0';
	return (dst_len + ft_strlen(src));
}

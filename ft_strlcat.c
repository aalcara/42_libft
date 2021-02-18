/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:51:37 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/18 15:38:47 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
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
}

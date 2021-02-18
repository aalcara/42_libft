/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:51:37 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/18 14:08:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	unsigned long	j;

	j = 0;
	i = 0;
	while (*(dst + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && (i + j + 1) < size)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	*(dst + i + j) = '\0';
	while (*(src + j) != '\0')
	{
		j++;
	}
	if (size < i)
	{
		return (size + j);
	}
	return (i + j);
}

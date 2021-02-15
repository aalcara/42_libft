/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:51:37 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/13 14:28:02 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long i;

	i = 0;
	while (*(src + i) != '\0' && (i + 1) < size)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (size > 0)
	{
		*(dst + i) = '\0';
	}
	while (*(src + i) != '\0')
	{
		i++;
	}
	return (i);
}

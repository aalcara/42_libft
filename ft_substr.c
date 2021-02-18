/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/18 16:04:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		slen;
	char				*substr;

	i = 0;
	slen = ft_strlen(s);
	if ((start + len) > slen)
	{
		return (ft_calloc(1, sizeof(char)));
	}
	substr = ft_calloc(len + 1, sizeof(char));
	while (*(s + start + i) != '\0' && i < len)
	{
		*(substr + i) = *(s + i + start);
		i++;
	}
	return (substr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/15 14:14:52 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	test_start(char const *s1, char const *set)
{
	unsigned int		i;
	unsigned int		newstart;

	i = 0;
	newstart = 0;
	while (*(s1 + i) == *(set + i))
	{
		i++;
		if (*(set + i) == '\0')
		{
			newstart = i;
		}
	}
	return (newstart);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	unsigned int		s1len;
	unsigned int		setlen;
	unsigned int		newstart;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	newstart = test_start(s1, set);
	i = s1len - setlen;
	s1len = s1len - newstart;
	while (*(s1 + i) == *set && *(s1 + i) != '\0')
	{
		set++;
		i++;
	}
	if (*set == '\0' && *(s1 + i) == '\0')
	{
		s1len = s1len - setlen;
	}
	return (ft_substr(s1, newstart, s1len));
}

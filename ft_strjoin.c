/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/04 12:29:46 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char		*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		len;
	char				*substr;

	i = 0;
	j = 0;
	//if (!s1 && !s2)
	//	return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(substr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		*(substr + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		*(substr + i + j) = *(s2 + j);
		j++;
	}
	*(substr + i + j) = '\0';
	return (substr);
}
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t			s1_len;
	size_t			s2_len;
	size_t			total_len;
	char			*substr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(substr = malloc((total_len + 1) * sizeof(char))))
		return (NULL);
	while (*s1 != '\0')
	{
		*substr++ = *s1++;
	}
	while (*s2++ != '\0')
	{
		*substr++ = *s2++;
	}
	*substr = '\0';
	return (substr);
}

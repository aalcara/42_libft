/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/21 01:30:32 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			words++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
	}
	return (words);
}

static char		**put_words(char const *s, char c, int n_words)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		k;
	char				**array;

	i = 0;
	j = 0;
	k = 0;
	array = ((char **)ft_calloc((n_words + 1), sizeof(char *)));
	if (array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (i > j)
			{
				array[k] = ft_substr(s, j, (i - j));
				k++;
			}
			j = i + 1;
		}
		i++;
	}
	return (array);
}

char			**ft_split(char const *s, char c)
{
	int				n_words;

	n_words = count_words(s, c);
	return (put_words(s, c, n_words));
}

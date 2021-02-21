/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/21 01:41:08 by aalcara-         ###   ########.fr       */
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
	unsigned int		i[3];
	char				**array;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	array = ((char **)ft_calloc((n_words + 1), sizeof(char *)));
	if (array == NULL)
		return (NULL);
	while (s[i[0]] != '\0')
	{
		if (s[i[0]] == c)
		{
			if (i[0] > i[1])
			{
				array[i[2]] = ft_substr(s, i[1], (i[0] - i[1]));
				i[2]++;
			}
			i[1] = i[0] + 1;
		}
		i[0] = i[0] + 1;
	}
	if (i[0] > i[1])
		array[i[2]] = ft_substr(s, i[1], (i[0] - i[1]));
	return (array);
}

char			**ft_split(char const *s, char c)
{
	int				n_words;

	n_words = count_words(s, c);
	return (put_words(s, c, n_words));
}

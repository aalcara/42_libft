/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrsinstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:34:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/16 18:36:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chrsinstr(char *str, char *chars)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (chars[i] != '\0')
	{
		if (ft_strchr(str, chars[i]))
			count++;
		i++;
	}
	return (count);
}

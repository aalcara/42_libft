/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/16 17:02:31 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strsignal(const char *nptr, int *p)
{
	int		signal;

	signal = 1;
	if (*(nptr + *p) == '+')
	{
		*p = *p + 1;
	}
	else if (*(nptr + *p) == '-')
	{
		signal = -1;
		*p = *p + 1;
	}
	return (signal);
}

long int	ft_atol(const char *nptr)
{
	int			i;
	long int	nbr;
	int			sig;

	i = 0;
	nbr = 0;
	sig = 1;
	while ((*(nptr + i) == ' ') || (*(nptr + i) >= '\t' && *(nptr + i) <= '\r'))
	{
		i++;
	}
	sig = strsignal(nptr, &i);
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		nbr = nbr * 10 + (*(nptr + i) - '0');
		i++;
	}
	return (nbr * sig);
}

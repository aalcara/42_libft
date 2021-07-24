/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:48:08 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/24 19:01:49 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dlstlen(t_dlist **dlist)
{
	t_dlist	*aux;
	int		count;

	count = 0;
	aux = *dlist;
	while (aux != NULL)
	{
		count++;
		aux = aux->next;
	}
	return (count);
}

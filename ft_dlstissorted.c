/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstissorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:49:22 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/24 09:49:40 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dlstissorted(t_dlist **dlist)
{
	t_dlist	*aux;

	aux = *dlist;
	while (aux->next != NULL)
	{
		if (aux->content > aux->next->content)
			return (0);
		else
			aux = aux->next;
	}
	return (1);
}

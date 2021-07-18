/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:43:16 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/17 22:24:35 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstlast(t_dlist *list)
{
	t_dlist	*aux;

	if (list == NULL)
		return (list);
	aux = list;
	while (aux->next != NULL)
		aux = aux->next;
	return (aux);
}

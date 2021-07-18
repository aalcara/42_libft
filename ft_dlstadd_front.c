/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:43:16 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/17 22:24:17 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlist **list, t_dlist *new)
{
	t_dlist	*aux;

	if (new == NULL)
		return ;
	aux = *list;
	*list = new;
	new->next = aux;
	aux->prev = new;
}

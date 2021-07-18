/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:43:16 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/17 22:24:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstnew(int content)
{
	t_dlist	*newpointer;

	newpointer = (t_dlist *)malloc(sizeof(t_dlist));
	if (!(newpointer))
		return (NULL);
	newpointer->content = content;
	newpointer->next = NULL;
	newpointer->prev = NULL;
	return (newpointer);
}

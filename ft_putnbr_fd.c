/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:20:32 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/16 23:38:01 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	char		*nstr;
	int			i;
	
	i = 0;
	nstr = ft_itoa(n);
	while (nstr[i] != '\0')
	{
		write(fd, &nstr[i], 1);
		i++;
	}
}

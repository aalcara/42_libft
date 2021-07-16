/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:59:10 by aalcara-          #+#    #+#             */
/*   Updated: 2021/07/16 16:59:25 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlong_fd(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n / 10)
		ft_putlong_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
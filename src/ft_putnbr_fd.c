/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:40:12 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/19 22:50:01 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_appendnbr(long n, int fd)
{
	char	c;

	c = n % 10 + '0';
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	tmp;

	tmp = n;
	if (tmp < 0)
	{
		ft_putchar_fd('-', fd);
		tmp *= -1;
	}
	ft_appendnbr(tmp, fd);
}

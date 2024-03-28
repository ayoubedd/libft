/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:10:57 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/19 21:15:18 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tc;

	i = 0;
	tc = (unsigned char)c;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == tc)
			return ((void *)s + i);
		i++;
	}
	return (0);
}

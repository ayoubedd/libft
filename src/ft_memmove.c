/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:33:16 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/04 18:18:40 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tsrc;
	unsigned char	*tdst;

	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (dst);
	if (tdst < tsrc)
		ft_memcpy(tdst, tsrc, len);
	else
	{
		while (0 < len)
		{
			tdst[len - 1] = tsrc[len - 1];
			len--;
		}
	}
	return (dst);
}

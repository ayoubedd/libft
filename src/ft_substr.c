/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:05:07 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/19 22:34:09 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	while (s[start + i] && i < len)
		i++;
	tmp = (char *)malloc((sizeof(char) * i) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:16:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/20 01:50:33 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = 0;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		tmp->content = f(tmp->content);
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}

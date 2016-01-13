/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:26:30 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 16:01:37 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t size)
{
	t_list *list;

	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list)
	{
		if (content)
		{
			if ((list->content = ft_memalloc(size)) != NULL)
			{
				list->content = ft_memcpy(list->content, content, size);
				list->content_size = size;
			}
			else
				list->content_size = 0;
		}
		else
		{
			list->content = (void *)content;
			list->content_size = 0;
		}
		list->next = NULL;
	}
	return (list);
}

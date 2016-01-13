/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:44:53 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 13:01:24 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list *new_list;
	t_list *it;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = f(lst);
	if (new_list == NULL)
		return (NULL);
	it = new_list;
	while ((lst = lst->next) != NULL)
	{
		if ((it->next = f(lst)) == NULL)
			return (new_list);
		it = it->next;
	}
	return (new_list);
}

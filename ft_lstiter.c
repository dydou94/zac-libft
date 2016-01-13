/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:42:42 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 12:59:37 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *))
{
	if (f == NULL || lst == NULL)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}

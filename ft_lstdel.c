/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:36:14 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 12:58:26 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	if ((*lst)->next)
		ft_lstdel(&((*lst)->next), del);
	ft_lstdelone(lst, del);
}

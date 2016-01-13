/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:20:57 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/01 17:46:45 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void *head;

	head = b;
	while (len)
	{
		*(unsigned char *)b = (unsigned char)c;
		b = (char *)b + 1;
		len--;
	}
	return (head);
}

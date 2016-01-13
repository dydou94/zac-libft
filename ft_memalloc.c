/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:36:53 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/14 19:01:44 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *s1;

	if (!size)
		return (NULL);
	s1 = (void *)malloc(size);
	if (!s1)
		return (NULL);
	ft_memset(s1, 0, size);
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:42:29 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/14 14:35:29 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n != 0)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		if (*(unsigned char *)src == (unsigned char)c)
			return (dst);
		src = (char *)src + 1;
		n--;
	}
	return (NULL);
}

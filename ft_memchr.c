/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:00:20 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/24 16:13:21 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t bytes)
{
	void *it;

	it = (void *)ptr;
	while (bytes-- != 0)
	{
		if (*(unsigned char *)it == (unsigned char)val)
			return (it);
		it = (char *)it + 1;
	}
	return (NULL);
}

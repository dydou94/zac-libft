/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:09:19 by dyuzan            #+#    #+#             */
/*   Updated: 2016/01/07 10:53:02 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src && n > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		n--;
	}
	*tmp = '\0';
	return (dest);
}

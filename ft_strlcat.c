/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:28:31 by skirkovs          #+#    #+#             */
/*   Updated: 2015/12/28 21:12:40 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t bytes)
{
	char			*d;
	const char		*s = src;
	size_t			n;
	size_t			len;

	n = bytes;
	d = dest;
	while (n-- != 0 && *d)
		d++;
	len = d - dest;
	if ((n = bytes - len) == 0)
		return (len + ft_strlen(src));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}

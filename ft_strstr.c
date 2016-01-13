/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:42:44 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/24 16:15:15 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*x;
	const char	*y;

	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			x = s1;
			y = s2;
			while (*x == *y && *x)
			{
				x++;
				y++;
			}
			if (*y == '\0')
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}

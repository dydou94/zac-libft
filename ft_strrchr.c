/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:23:25 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/01 17:50:08 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const	char *s, int c)
{
	const char *start = s;

	while (*s != '\0')
	{
		s++;
	}
	while (*s != c && s >= start)
	{
		s--;
	}
	if (*s != c)
		return (0);
	return ((char *)s);
}

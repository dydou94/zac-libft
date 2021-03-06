/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:09:34 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/01 17:47:55 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const	char *s, int c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s != c)
		return (NULL);
	return ((char *)s);
}

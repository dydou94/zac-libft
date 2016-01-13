/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:49:11 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/24 19:21:41 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	if (*s1 == *s2)
		return (0);
	if (*s1 != *s2)
		return ((unsigned char)*s1) - ((unsigned char)*s2);
	else
		return (0);
}

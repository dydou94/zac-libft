/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:24:02 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/28 21:44:38 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, size_t start, size_t len)
{
	char	*cpy;
	int		i;

	if (!s || (len == 0 && start != 0))
		return (NULL);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (len != 0)
	{
		len--;
		cpy[i++] = s[start++];
	}
	cpy[i] = '\0';
	return (cpy);
}

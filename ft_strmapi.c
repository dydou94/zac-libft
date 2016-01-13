/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 19:57:50 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/24 19:09:22 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	return (tmp);
}

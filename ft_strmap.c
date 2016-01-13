/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:14:54 by dyuzan            #+#    #+#             */
/*   Updated: 2016/01/07 10:33:42 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int			i;
	char		*newstr;

	i = 0;
	if (s != 0 && f != 0)
	{
		newstr = ft_strnew(ft_strlen(s));
		if (!newstr)
			return (NULL);
		while (s[i] != '\0')
		{
			newstr[i] = (*f)(s[i]);
			i++;
		}
		return (newstr);
	}
	return (0);
}

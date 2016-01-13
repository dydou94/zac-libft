/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:33:19 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/21 11:37:14 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;
	char *s2;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	s2 = str;
	ft_memset(s2, 0, size + 1);
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:19:27 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/14 14:39:07 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *string1)
{
	char	*string2;

	if (!(string2 = (char *)malloc(ft_strlen(string1) + 1)))
		return (NULL);
	return (ft_strcpy(string2, string1));
}

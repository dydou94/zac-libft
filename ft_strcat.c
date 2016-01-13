/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:28:08 by dyuzan            #+#    #+#             */
/*   Updated: 2015/12/01 17:47:39 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char *cpy;

	cpy = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, s2);
	return (cpy);
}

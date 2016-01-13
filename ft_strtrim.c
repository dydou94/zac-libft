/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:09:02 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 14:12:08 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*newstr;
	char const	*end;
	size_t		index;

	if (s == NULL)
		return (NULL);
	end = s;
	while (*end)
		end++;
	--end;
	while (end >= s && (*end == ' ' || *end == '\n' || *end == '\t'))
		end--;
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		++s;
	newstr = (end < s || *s == '\0') ? ft_strnew(1) : ft_strnew(end - s + 1);
	if (newstr)
	{
		index = 0;
		while (s <= end)
			newstr[index++] = *s++;
		newstr[index] = '\0';
	}
	return (newstr);
}

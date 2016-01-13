/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:15:18 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 15:52:40 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			count_entries(char *str, char c)
{
	int entries;
	int in_word;

	entries = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			entries++;
			while (*str && *str != c)
				str++;
		}
		if (*str)
			str++;
	}
	return (entries);
}

static int			str_count(char *str, char c)
{
	int count;

	count = 0;
	while (*str && *str != c)
	{
		count++;
		str++;
	}
	return (count);
}

static void			cpy_str(char *dest, char **src, char c)
{
	*dest = *dest;
	while (**src && **src != c)
	{
		*dest++ = **src;
		*src += 1;
	}
	*dest = '\0';
}

char				**ft_strsplit(char *str, char del)
{
	int		entries;
	char	**cpy;
	char	**arr;

	if (str == NULL)
		return (NULL);
	entries = count_entries(str, del);
	if ((arr = (char **)malloc(sizeof(char *) * (entries + 1))) == NULL)
		return (NULL);
	arr[entries] = 0;
	cpy = arr;
	while (*str)
	{
		if (*str != del)
		{
			entries = str_count(str, del);
			*arr = (char *)malloc(sizeof(char) * entries);
			cpy_str(*arr, &str, del);
			arr++;
		}
		if (*str)
			str++;
	}
	return (cpy);
}

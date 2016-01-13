/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:29:52 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/26 15:49:39 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define BASE "0123456789ABCDEF"

static void		ft_strrev(char *s)
{
	char *end;

	end = s;
	while (*end)
		end++;
	--end;
	while (s < end)
	{
		*s ^= *end;
		*end ^= *s;
		*s++ ^= *end--;
	}
}

static char		*negative_number(long long value)
{
	char	*str;
	int		i;

	if ((str = (char *)malloc(sizeof(char) * 13)) == NULL)
		return (NULL);
	value *= -1;
	i = 0;
	while (value > 0)
	{
		str[i++] = BASE[value % 10];
		value /= 10;
	}
	str[i] = '-';
	str[i + 1] = '\0';
	ft_strrev(str);
	return (str);
}

static char		*unsigned_number(long long value, int base)
{
	char	*str;
	int		i;

	if ((str = (char *)malloc(20 * sizeof(char))) == NULL)
		return (NULL);
	i = 0;
	while (value > 0)
	{
		str[i++] = BASE[value % base];
		value /= base;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}

char			*ft_itoa_base(int value, int base)
{
	char *zero;

	if (base < 2 || base > 16)
		return (NULL);
	if (value == 0)
	{
		if ((zero = (char *)malloc(sizeof(char) * 2)) != NULL)
		{
			zero[0] = '0';
			zero[1] = '\0';
		}
		return (zero);
	}
	else if (base == 10 && value < 0)
	{
		return (negative_number((long long)value));
	}
	else
	{
		if (value < 0)
			return (unsigned_number(((long long)value * -1), base));
		else
			return (unsigned_number((long long)value, base));
	}
}

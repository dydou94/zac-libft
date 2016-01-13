/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirkovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:24:15 by skirkovs          #+#    #+#             */
/*   Updated: 2015/11/25 15:21:30 by skirkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		write(fd, "(null)", ft_strlen("(null)"));
	else
		write(fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}

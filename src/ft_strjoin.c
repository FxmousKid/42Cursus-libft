/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:55:50 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/22 00:34:07 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	calc_size_malloc(int size, char **strs, char *sep)
{
	int	size_malloc;

	size_malloc = 1;
	if (sep == NULL || strs == NULL || size == 0)
		return (size_malloc);
	size_malloc += ((size - 1) * ft_strlen(sep));
	while (size-- > 0)
	{
		if (*strs == NULL)
			return (-1);
		size_malloc += ft_strlen(*strs++);
	}
	return (size_malloc);
}

static char	*ft_strcat(char *dest, char *src)
{
	if (src == NULL)
		return (NULL);
	while (*src)
		*dest++ = *src++;
	return (dest);
}

static char	*join_strs(int size, char **strs, char *dest, char *sep)
{
	char	*tmp;

	tmp = dest;
	while (size-- > 1)
	{
		if (*strs == NULL)
			return (NULL);
		tmp = ft_strcat(tmp, *strs++);
		tmp = ft_strcat(tmp, sep);
	}
	tmp = ft_strcat(tmp, *strs);
	*++tmp = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		size_malloc;

	if (size == 0 || strs == NULL || sep == NULL)
		return (NULL);
	size_malloc = calc_size_malloc(size, strs, sep);
	if (size_malloc == -1)
		return (NULL);
	tab = (char *) malloc(sizeof(char) * (size_malloc + 1));
	if (tab == NULL)
		return (NULL);
	if (join_strs(size, strs, tab, sep) == NULL)
		return (NULL);
	return (tab);
}

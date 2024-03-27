/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:55:50 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/24 23:07:41 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_size_malloc(char const *s1, char const *s2)
{
	int	size_malloc;

	size_malloc = 1;
	if (s1 == NULL || s2 == NULL)
		return (-1);
	size_malloc += ft_strlen(s1);
	size_malloc += ft_strlen(s2);
	return (size_malloc);
}

static char	*ft_strcat(char *dest, char const *src)
{
	int	counter;

	if (src == NULL)
		return (NULL);
	counter = 0;
	while (src[counter])
		*dest++ = src[counter++];
	return (dest);
}

static char	*join_strs(char *dest, char const *s1, char const *s2)
{
	char	*tmp;

	tmp = dest;
	tmp = ft_strcat(tmp, s1);
	tmp = ft_strcat(tmp, s2);
	*++tmp = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		size_malloc;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size_malloc = calc_size_malloc(s1, s2);
	if (size_malloc == -1)
		return (NULL);
	tab = (char *) malloc(sizeof(char) * (size_malloc + 1));
	if (tab == NULL)
		return (NULL);
	join_strs(tab, s1, s2);
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:52:59 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/24 01:53:34 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	idx;
	size_t	len_small;
	size_t	len_big;

	if (*small == '\0')
		return ((char *) big);
	idx = 0;
	len_small = ft_strlen(small);
	len_big = ft_strlen(big);
	while (len_big - idx >= len_small && idx < len)
	{
		if (strncmp(big + idx++, small, len_small) == 0)
			return ((char *) big + --idx);
	}
	return (NULL);
}

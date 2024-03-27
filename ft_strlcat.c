/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:55:39 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/23 12:34:55 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		counter;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst >= size)
		return (len_src + len_dst);
	counter = -1;
	while (src[++counter] && len_dst + counter < size - 1)
		dst[len_dst + counter] = src[counter];
	dst[len_dst + counter] = '\0';
	return (len_dst + len_src);
}

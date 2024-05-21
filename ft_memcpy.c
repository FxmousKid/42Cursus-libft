/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:00:38 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/21 15:41:22 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	counter;
	char	*dest_ptr;
	char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	counter = -1;
	while (++counter < n)
		dest_ptr[counter] = src_ptr[counter];
	return (dest);
}

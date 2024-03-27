/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:00:13 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/24 21:57:34 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	counter;
	char	*dest_ptr;
	char	*src_ptr;

	if (dest == NULL || src == NULL)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	if (src_ptr < dest_ptr)
	{
		while (n-- > 0)
			dest_ptr[n] = src_ptr[n];
	}
	else
	{
		counter = -1;
		while (++counter < n)
			dest_ptr[counter] = src_ptr[counter];
	}
	return (dest);
}

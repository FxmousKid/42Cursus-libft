/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:05:07 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/26 15:07:38 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	if (nmemb && size && nmemb > UINT_MAX / size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}

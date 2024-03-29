/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:51:10 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/24 15:36:32 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	substr_aux(char *dest, char const *s, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = dest;
	while (start < len)
		*tmp++ = s[start++];
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s == NULL || start >= len)
		return (NULL);
	sub = (char *) malloc(sizeof(char) * (ft_strlen(s) - start));
	if (sub == NULL)
		return (NULL);
	substr_aux(sub, s, start, len);
	return (sub);
}

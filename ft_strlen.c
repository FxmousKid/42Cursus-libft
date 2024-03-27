/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:41:11 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/23 21:16:19 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s)
{
	int	counter;

	counter = 0;
	if (s == NULL)
		return (0);
	while (s[counter])
		counter++;
	return (counter);
}

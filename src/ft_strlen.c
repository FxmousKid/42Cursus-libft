/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:41:11 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/20 02:15:36 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	if (str == NULL)
		return (0);
	while (str[counter])
		counter++;
	return (counter);
}

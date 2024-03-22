/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:05:43 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/22 11:39:48 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(char *str)
{
	int	rendue;
	int	sign;

	rendue = 0;
	sign = 1;
	while (*str >= '\t' && *str <= '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rendue = (*str - '0') + 10 * rendue;
		str++;
	}
	return (rendue * sign);
}

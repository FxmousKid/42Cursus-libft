/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:09:02 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/29 19:11:07 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

long long	ft_atoi_long(char *num)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	while (*num == ' ' || (*num >= '\t' && *num <= '\r'))
		num++;
	if (*num == '-')
	{
		sign = -1;
		num++;
	}
	else if (*num == '+')
		num++;
	while (*num >= '0' && *num <= '9')
	{
		res = res * 10 + *num - '0';
		num++;
	}
	return (res * sign);
}

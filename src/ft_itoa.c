/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:02:30 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/31 19:21:38 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	powerof10(int n)
{
	if (n == 0)
		return (1);
	return (10 * powerof10(n - 1));
}

static int	calc_size_malloc(long num)
{
	int	size_malloc;

	size_malloc = 1 + (num < 0);
	if (num < 0)
		num = -num;
	while (num > 9)
	{
		size_malloc++;
		num /= 10;
	}
	return (size_malloc);
}

static	void	add_int_to_string(char *dest, long num, int exp_10)
{
	char	*tmp;

	tmp = dest;
	if (num < 0)
	{
		*tmp++ = '-';
		exp_10--;
		num = -num;
	}
	while (num > 9)
	{
		*tmp++ = (num / powerof10(exp_10)) + '0';
		num = num % powerof10(exp_10--);
	}
	*tmp = num + '0';
}

static char	*ft_itoa_long(long num)
{
	int		size_malloc;
	char	*str;

	size_malloc = calc_size_malloc(num);
	str = (char *) malloc(sizeof(char) * size_malloc);
	if (str == NULL)
		return (NULL);
	add_int_to_string(str, num, size_malloc - 1);
	return (str);
}

char	*ft_itoa(int n)
{
	return (ft_itoa_long(n));
}

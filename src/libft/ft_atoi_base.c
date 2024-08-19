/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:11:43 by inazaria          #+#    #+#             */
/*   Updated: 2024/08/19 10:26:33 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	check_base(char *base)
{
	unsigned int	tr_pr;
	unsigned int	tr_snd;

	tr_pr = 0;
	tr_snd = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[tr_pr])
	{
		tr_snd = 0;
		while (base[tr_snd])
		{
			if ((base[tr_pr] == base[tr_snd] && tr_pr != tr_snd)
				|| base[tr_snd] == '+' || base[tr_snd] == '-'
				|| (base[tr_snd] <= 32 && base[tr_snd] != 127))
				return (0);
			tr_snd++;
		}
		tr_pr++;
	}
	return (1);
}

int	putnbrbase(char c, char *base)
{
	int	counter;

	counter = 0;
	while (base[counter])
	{
		if (base[counter] == c)
			return (counter);
		counter++;
	}
	return (0);
}

int	occ(char c, char *base)
{
	int	flag;

	flag = 0;
	while (*base)
	{
		if (c == *base)
			flag = 1;
		base++;
	}
	return (flag);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_b;
	int	rendue;
	int	sign;

	if (!check_base(base))
		return (0);
	sign = 1;
	rendue = 0;
	len_b = ft_strlen(base);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (occ(*str, base) && *str)
	{
		rendue = (putnbrbase(*str, base) + len_b * rendue);
		str++;
	}
	return (rendue * sign);
}

long	ft_atoi_base_long(char *str, char *base)
{
	int		len_b;
	long	rendue;
	int		sign;

	if (!check_base(base))
		return (0);
	sign = 1;
	rendue = 0;
	len_b = ft_strlen(base);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (occ(*str, base) && *str)
	{
		rendue = (putnbrbase(*str, base) + len_b * rendue);
		str++;
	}
	return (rendue * sign);
}
/*
int	main(void)
{
	char *s = "1A";
	char *v = "0123456789";
	printf("ft_atoi_base(%s, %s) = %d",s,v ,ft_atoi_base(s, v));
}*/

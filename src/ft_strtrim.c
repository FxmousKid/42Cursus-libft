/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:51:45 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:20 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	occ(char c, char const *s2)
{
	int	counter;

	counter = 0;
	while (s2[counter])
	{
		if (s2[counter++] == c)
			return (1);
	}
	return (0);
}
int	amt_end(char const *s1, char const *set)
{
	int	amount_to_trim;
	int	counter_s;
	
	amount_to_trim = 0;
	counter_s = ft_strlen(s1) - 1;
	while (occ(s1[counter_s--], set))
		amount_to_trim++;
	return (amount_to_trim);
}

int	amt_begin(char const *s1, char const *set)
{
	int	amount_to_trim;
	int	counter_s;
	
	amount_to_trim = 0;
	counter_s = 0;
	while (occ(s1[counter_s++], set))
		amount_to_trim++;
	return (amount_to_trim);
}

void	add_trim_str(char *dest, char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*tmp;

	start = (amt_begin(s1, set));
	end   = (ft_strlen(s1) - amt_end(s1, set));
	tmp   = dest;
	if (*s1 == '\0')
	{
		*tmp = '\0';
		return ;
	}
	while (start < end)
		*tmp++ = s1[start++];
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trim;
	int		size_s1_trim;

	if (s1 == NULL || set == NULL) 
		return (NULL);
	size_s1_trim = ft_strlen(s1) - amt_begin(s1, set) - amt_end(s1, set); 
	s1_trim = (char *) malloc(sizeof(char) * (size_s1_trim + 1));
	if (s1_trim == NULL)
		return (NULL);
	add_trim_str(s1_trim, s1, set);
	return (s1_trim);
}

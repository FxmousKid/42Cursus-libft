/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:57:34 by inazaria          #+#    #+#             */
/*   Updated: 2024/10/10 20:29:29 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	occurences(char c, char *sep_charset)
{
	while (sep_charset && c && *sep_charset)
	{
		if (c == *sep_charset++)
			return (1);
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	wordcount;
	int	f_change;

	if (str == NULL || sep == NULL)
		return (0);
	wordcount = 0;
	f_change = 1;
	while (*str)
	{
		wordcount += (f_change && !occurences(*str, sep));
		f_change = (occurences(*str++, sep));
	}
	return (wordcount);
}

void	ft_strncpy(char *dest, char *src, char *sep)
{
	int	counter;

	if (!src && !*src)
		return ;
	counter = -1;
	while (src[++counter] && !occurences(src[counter], sep))
		dest[counter] = src[counter];
	dest[counter] = '\0';
	return ;
}

void	sub_split(char **tab, char *str, char *charset)

{
	int	len_word;

	len_word = 0;
	while (str && charset && *str)
	{
		if (!occurences(*str, charset))
		{
			while (!occurences(*(str + len_word), charset))
				len_word++;
			*tab = (char *) malloc((sizeof(char) * len_word) + 1);
			if (*tab == NULL)
				return ;
			ft_strncpy(*tab++, str, charset);
			str += len_word;
			len_word = 0;
		}
		else if (occurences(*str, charset))
			str++;
	}
	*tab = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **) malloc((sizeof(char *) * count_words(str, charset)) + 1);
	if (tab == NULL)
		return (0);
	sub_split(tab, str, charset);
	return (tab);
}

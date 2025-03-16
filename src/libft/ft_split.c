/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:57:34 by inazaria          #+#    #+#             */
/*   Updated: 2025/03/16 16:45:53 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && (i == 0 || is_sep(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

int	*word_sizes(char *str, char *charset, int words)
{
	int	i;
	int	*sizes;
	int	index;

	sizes = malloc(sizeof(int) * words);
	if (!sizes)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			if (i == 0 || is_sep(str[i - 1], charset))
				sizes[index++] = 0;
			sizes[index - 1]++;
		}
		i++;
	}
	return (sizes);
}

char	**alloc_words(char *str, char *charset, int words)
{
	char	**res;
	int		*sizes;
	int		i;

	sizes = word_sizes(str, charset, words);
	if (!sizes)
		return (NULL);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (free(sizes), NULL);
	i = 0;
	while (i < words)
	{
		res[i] = malloc(sizeof(char) * (sizes[i] + 1));
		if (!res[i])
			return (free(sizes), NULL);
		i++;
	}
	res[words] = NULL;
	free(sizes);
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;
	int		i;
	int		j;
	int		index;

	words = word_count(str, charset);
	res = alloc_words(str, charset, words);
	if (!res)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			if (i == 0 || is_sep(str[i - 1], charset))
				j = 0;
			res[index][j++] = str[i];
			if (str[i + 1] == '\0' || is_sep(str[i + 1], charset))
				res[index++][j] = '\0';
		}
		i++;
	}
	return (res);
}

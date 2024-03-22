/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:16:40 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/22 22:31:12 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_STANDARD_FUNCS_H
# define EASY_STANDARD_FUNCS_H
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>


size_t		ft_strlen(char const *s);
int		ft_atoi(char const *nptr);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);       
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);

char	*ft_itoa(int num);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);


#endif 

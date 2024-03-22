/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:16:40 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/21 23:25:47 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_STANDARD_FUNCS_H
# define EASY_STANDARD_FUNCS_H

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);       
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		count_words(char *str, char *charset);

char	*ft_itoa(int num);
char	**ft_split(char *str, char *charset);
char	*ft_strjoin(int size, char **strs, char *sep);

#endif 

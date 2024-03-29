/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:21:40 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/25 18:29:09 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if ((*lst)->next == NULL)
	{
		(*lst)->next = new;
		return ;
	}
	ft_lstadd_back(&(*lst)->next, new);
}

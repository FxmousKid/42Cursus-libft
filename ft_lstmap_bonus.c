/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:13:39 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/18 19:43:22 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	t_list	*tmp_orig;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = (t_list *) malloc(sizeof(t_list) * ft_lstsize(lst));
	if (new_lst == NULL)
		return (NULL);
	tmp = new_lst;
	tmp_orig = lst;
	while (tmp_orig != NULL)
	{
		if (tmp_orig->next != NULL)
			*tmp = (t_list){.content = f(tmp_orig->content), .next = tmp + 1};
		else
			*tmp = (t_list){.content = f(tmp_orig->content), .next = NULL};
		tmp++;
		tmp_orig = tmp_orig->next;
	}
	return (new_lst);
}

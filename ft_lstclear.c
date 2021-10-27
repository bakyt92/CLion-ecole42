/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:27:51 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:27:52 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *begin;

	if (!lst || !del)
		return;
	begin = *lst;
	while (begin)
	{
		temp = begin;
		begin = begin->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

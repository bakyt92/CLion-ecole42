/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:27:40 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/10/28 00:27:41 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

    if (!new || !lst)
		return;
	if (*lst)
    {
        tmp = ft_lstlast(*lst);
        tmp->next = new;
    }

	else
		*lst = new;
}

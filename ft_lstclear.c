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
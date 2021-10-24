#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *elem1;
	t_list *list1;

	if (!lst || !f || !del)
		return (NULL);
	if (!(elem1 = (*f)(lst->content)))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	list1 = elem1;
	while (lst)
	{
		elem1 = ft_lstnew((*f)(lst->content));
		if (!elem1)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		elem1 = elem1->next;
		lst = lst->next;
		ft_lstadd_back(&list1, elem1);
	}
	return (elem1);
}
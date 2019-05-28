#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list (*f)(t_list *elem))
{
	t_list	*head;
	t_list	*new;

	new = f(lst);
	head = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = f(lst);
		if (!(new->next))
		{
			free(new->next);
			return (NULL);
		}
		new = new->next;
	}
	return (new);
}
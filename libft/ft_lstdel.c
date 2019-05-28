#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp_current;
	t_list 	*tmp_next;

	tmp_current = *alst;
	while (tmp_current)
	{
		tmp_next = tmp_current->next;
		ft_lstdelone(lst, del);
		tmp_current = tmp_next;
	}
	*alst = NULL;
}
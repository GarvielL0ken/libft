
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t constent_size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	if (!content)
	{
		lst->content = NULL
		lst->constent_size = 0;
	}
	else
	{
		lst->content = malloc(sizeof(content));
		if (!lst->content)
			return (NULL);
		ft_memcpy(lst->content, content, sizeof(content));
		lst->constent_size = constent_size;
	}
	lst->next = NULL;
	return (lst);
}
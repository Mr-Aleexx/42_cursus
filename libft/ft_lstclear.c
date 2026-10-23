#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*next;

	cur = *lst;
	while(cur)
	{
		next = cur->next;
		if (del)
			del(cur->content);
		free(cur);
		cur = next;
	}
}

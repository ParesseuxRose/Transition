#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	list = *alst;
	if (list)
	{
		while (list->next)
		{
			(*del)(list->content, list->content_size);
			list = list->next;
		}
	}
	*alst = list;
}

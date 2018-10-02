#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	lst = *alst;
	if (lst)
	{
		while (lst->next)
		{
			free(lst);
			lst->next;
		}
	}
	*alst = lst;
}

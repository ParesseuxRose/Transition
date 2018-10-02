#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*lst;

	lst = *alst;
	if (!lst)
		lst = new;
	else
	{
		while (lst->next)
			lst = lst->next;
		lst = new;
	}
}

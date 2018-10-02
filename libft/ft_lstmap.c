#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	list = NULL;
	if ((list = (t_list*)malloc(sizeof(list))) == NULL)
		return (0);
	if (lst)
	{
		while (lst)
		{
			list = (*f)(lst);
			lst = lst->next;
		}
	}
	return (list);	
}

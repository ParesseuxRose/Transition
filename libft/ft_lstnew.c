#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	content_size = 0;
	if ((list = (t_list*)malloc(sizeof(list) * content_size)) == NULL)
		return (0);
	while (content)
	{

	}
	return (list);
}

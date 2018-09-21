
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(str) * size + 1)) == NULL)
		return (0);
	while (*str)
	{
		*str = '\0';
		*(str++);
	}
	return (str);
}

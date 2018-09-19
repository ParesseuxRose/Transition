
#include "libft.h"

void	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(str) + size + 1)) == NULL)
		return (0);	
	while (size > 0)
	{
		*str = '\0';
		*(str++);
	}
	return (str);
}

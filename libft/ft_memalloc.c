
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char*)malloc(sizeof(str) * size + 1)) == NULL)
		return (0);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}


#include "libft.h"

void	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	if ((str = (char*)malloc(sizeof(str) + size + 1)) == NULL)
		return (0);	
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

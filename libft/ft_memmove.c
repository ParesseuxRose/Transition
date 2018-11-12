#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char 	*strsrc;
	char 	*strdest;
	size_t	i;

	i = 0;
	strdest = (char*)dest;
	strsrc = (char*)src;
	while (i < n && strsrc[i] != '\0')
	{
		strdest[i] = strsrc[i];
		i++;
	}
	return (strdest);
}

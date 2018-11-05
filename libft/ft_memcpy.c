#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char 	*strsrc;
	char 	*strdest;
	size_t	i;

	strsrc = (char*)src;
	strdest = (char*)dest;
	i = 0;
	while (i < n && strsrc[i] != '\0')
	{
		strdest[i] = strsrc[i];
		i++;	
	}
	return (strdest);
}

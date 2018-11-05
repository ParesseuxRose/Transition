#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int nb, size_t n)
{
	size_t	i;
	char	*strsrc;
	char	*strdest;

	strdest = (char*)dest;
	strsrc = (char*)src;
	i = 0;

	while (strsrc[i] != nb && i < n && strsrc[i] != '\0')
	{
		strdest[i] = strsrc[i];
		i++;
	}
	return (dest);
}

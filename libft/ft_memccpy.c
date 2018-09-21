#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int nb, size_t n)
{
	while (*src != nb)
	{
		*dest = *src;
		*(src++);
		*(dest++);
	}
	return (dest);
}

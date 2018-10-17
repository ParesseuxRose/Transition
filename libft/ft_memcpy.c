#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *strsrc;
	char *strdest;

	n = 0;
	strsrc = (char*)src;
	strdest = (char*)dest;
	*strsrc = *strdest;
}

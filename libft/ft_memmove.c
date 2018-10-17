#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *strsrc;
	char *strdest;

	strdest = (char*)dest;
	strsrc = (char*)src;
	n = 0;
	*strdest = *strsrc;
}

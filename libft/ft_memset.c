#include "libft.h"

void	*ft_memset(void *str, int nb, size_t n)
{
	char *strstr;

	strstr = (char*)str;
	while (n > 0)
	{
		*strstr = (unsigned char)nb;
		*strstr++;
		n--;
	}	
	return (strstr);
}

#include "libft.h"

void	*ft_memset(void *str, int nb, size_t n)
{
	char 	*strstr;
	size_t	i;

	i = 0;
	strstr = (char*)str;
	while (i < n)
	{
		strstr[i] = (unsigned char)nb;
		i++;
	}	
	return (strstr);
}

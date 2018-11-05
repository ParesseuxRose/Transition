#include "libft.h"

void	*ft_memchr(const void *str, int nb, size_t n)
{
	size_t		i;
	unsigned char	*chr;

	i = 0;
	chr = (unsigned char *)str;
	while (i < n)
	{
		if (chr[i] == (unsigned char)nb )
			return ((void *)(chr + i));
		else
			i++;	
	}
	return (0);
}

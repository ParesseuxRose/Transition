#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char 	*strs1;
	char 	*strs2;
	size_t	i;

	strs1 = (char *)s1;
	strs2 = (char *)s2;
	i = 0;
	while(i < n && strs1[i] != '\0' && strs2[i] != '\0')
	{
		if (strs1[i] == strs2[i])
			i++;
		else
			return(strs1[i] - strs2[i]);
	}
	return (strs1[i] - strs2[i]);
}

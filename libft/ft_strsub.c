
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(str) * len + 1)) == NULL)
		return (0);
	while (s[start] != '\0')
	{
		*str = s[start];
		start++;
		*(str++);
	}
	*str = '\0';
}

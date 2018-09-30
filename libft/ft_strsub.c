
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;

	i = 0;
	if ((str = (char*)malloc(sizeof(str) * len + 1)) == NULL)
		return (0);
	while (s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

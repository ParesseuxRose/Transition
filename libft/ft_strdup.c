#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;

	i = 0;
	if ((str = (char *)(malloc(sizeof(str) * ft_strlen(s) + 1))) == NULL)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

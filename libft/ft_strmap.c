
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int	i;

	if ((str = (char*)malloc(sizeof(str) * ft_strlen(s) + 1)) == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{	
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

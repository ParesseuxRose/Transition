
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;

	while (*s != '\0')
	{	
		*str = f(*s);
		*(s++);
		*(str++);
	}
	*str = '\0';
	return (str);
}

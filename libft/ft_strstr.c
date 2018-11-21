#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*s1;
	char	*s2;

	if (!*to_find)
		return ((void *)str);
	while (*str)
	{
		if (*str == *to_find)
		{
			s1 = (void *)str +1;
			s2 = (void *)to_find+1;
			while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
			{
				s2++;
				s1++;
			}
			if (!*s2)
				return ((void *)s1);
		}
		s1++;
	}
	return (0);
}

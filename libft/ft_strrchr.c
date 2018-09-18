#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != c)
		i--;
	return (s + i);
}

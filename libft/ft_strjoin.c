#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	i;
	int	y;

	if ((str = (char*)malloc(sizeof(str) * ((ft_strlen(s1) + ft_strlen(s2))))) == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	y = i;
	while (s2[i-y] != '\0')
	{
		str[i] = s2[i - y];
		i++;
	}
	str[i] = '\0';
	return (str);

}

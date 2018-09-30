#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*str;
	int	y;

	y = 0;
	i = ft_strlen(s);
	while (s[i] != c)
		i--;
	if ((str = (char*)malloc(sizeof(str) * (ft_strlen(s) - i) + 1)) == NULL)
		return (0);
	while (s[i] != '\0')
	{
		str[y] = s[i];
		y++;
		i++;
	}
	str[y] = '\0';
	return (str);
}

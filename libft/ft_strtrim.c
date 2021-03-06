#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	char	*str;
	int	y;

	y = 0;
	i = 0;
	while (s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
		i++;
	if ((str = (char*)malloc(sizeof(str) * (ft_strlen(s + i) + 1))) == NULL)
		return (0);
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
	{
		str[y] = s[i];
		y++;
		i++;
	}
	str[y] = '\0';
	return (str);
}	

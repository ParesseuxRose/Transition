#include "libft.h"

char *ft_strchr(const char *str, int nb)
{
	char	*strchr;
	int	i;

	i = 0;	
	if ((strchr = (char*)malloc(sizeof(strchr) * ft_strlen(str) + 1)) == NULL)
		return (0);
	while (str[i] != '\0')
	{
		strchr[i] = str[i];
		i++;
	}
	i = 0;
	while (strchr[i] != nb)
		i++;
	return (strchr + i);
}

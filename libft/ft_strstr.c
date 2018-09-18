#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	stop;
	int	j;
	stop = 1;
	i = 0;
	while (stop)
	{
		stop = 0;
		j = 0;
		while (str[i] != to_find[j] && str[i] != '\0')
		{
			i++;
		}
		while (str[i] == to_find[j] && to_find[j] != '\0' && str[i] != '\0')
		{
			i++;
			j++;
		}
		if (*to_find != '\0')
		{
			stop = 1;
			j = 0;
		}
		else
		{
			return (str + i);
		}
	}
}

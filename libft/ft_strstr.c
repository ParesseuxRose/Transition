#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	stop;
	int	j;
	char	*strstr;


	stop = 1;
	i = 0;
	if ((strstr = (char*)malloc(sizeof(strstr) * ft_strlen(str) + 1)) == NULL)
		return (0);
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
			strstr[j] = str[i];
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
			strstr[j] = '\0';
			return (strstr);
		}
	}
	return (strstr);
}

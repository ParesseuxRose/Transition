#include "libft.h"

char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	int	cpt;

	cpt = 1;
	i = 0;
	if (n < 0)
		str[i] = '-';
	while (n > 10)
	{
		n = n / 10;
		cpt = cpt * 10;
	}
	i++;
	str[i] = n + 48;
	i++;
	str[i] = '\0';
	return (str);
}	

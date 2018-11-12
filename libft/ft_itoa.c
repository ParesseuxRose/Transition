#include "libft.h"

int	ft_count_nbr(int nb)
{
	unsigned int	i;
	int		cpt;

	cpt = 0;
	if (nb < 0)
	{
		i = -nb;
		cpt++;
	}
	else
		i = nb;
	while (i > 10)
	{
		i = i / 10;
		cpt++;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	int	y;
	long	x;
	
	i = 0;
	y = ft_count_nbr(n);
	if ((str = (char*)malloc(sizeof(str) * y + 1)) == NULL)
		return (0);
	x = n;
	if (x < 0)
	{
		str[0] = '-';
		x = -x;
	}
	while (x > 1)
	{
		str[y - i] = x % 10 + 48;
		x = x / 10;
		i++;
	}
	str[y + 1] = '\0';
	return (str);
}	

#include "libft.h"

int	ft_count_nbr(int nb, int cpt)
{
	unsigned int	i;

	i = nb;
	if (nb < 0)
		i = -nb;
	if (i > 10)
	{
		ft_count_nbr(i / 10, cpt + 1);
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	int	cpt;

	cpt = 1;
	i = 0;
	if ((str = (char*)malloc(sizeof(str) * ft_count_nbr(n, cpt) + 1)) == NULL)
		return (0);
}	

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
	if ((str = (char*)malloc(sizeof(str) * 10 + 1)) == NULL) // Taille de la chaine a calculer avant
		return (0);
	str[i] = ' ';
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

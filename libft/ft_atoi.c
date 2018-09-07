
#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	nb;
	
	nb = 0;
	s = 1;
	i = 0;
	while(str[i] <= 32)
		i++;
	if(str[i] == '-')
		s = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	nb = nb * s;
	return (nb);
}

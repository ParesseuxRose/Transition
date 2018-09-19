
#include "libft.h"

void	ft_strdel(char **as)
{
	int	i;
	
	i = 0;
	while (*as[i] != '\0')
	{
		free(as[i]);
		i++;
	}
	*as = NULL;
}


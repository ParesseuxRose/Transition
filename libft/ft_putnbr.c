
#include "libft.h"

void	ft_putnbr(int nb)
{
	size_t i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}


#include "libft.h"

void	ft_putnbr(int nb)
{
	long	i;
	
	i = nb;
	if (nb < 0 && (i = -nb))
		ft_putchar('-');
	if (i > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

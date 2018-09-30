#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	size_t	i;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		i = -nb;
	}
	else
		i = nb;
	if (i > 9)
		ft_putnbr_fd(i  / 10, fd);
	ft_putchar_fd(i % 10 + '0', fd);
}

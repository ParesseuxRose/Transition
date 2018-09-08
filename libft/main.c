#include "libft.h"

int main(int argc, char *argv[])
{
	const char *mot = argv[1];
	if (argc != 2)
		return(0);
	argc = 0;
	ft_putstr(mot);
	ft_putchar('\n');
	return (0);
}

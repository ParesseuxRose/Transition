#include "libft.h"

char *ft_strchr(const char *str, int nb)
{
	while (*str != nb && *str != '\0')
		*str++;
	return (str);
}

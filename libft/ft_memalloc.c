
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if ((str = (char*)malloc(sizeof(void) * size)) == NULL)
		return (0);
	ft_bzero(str, size);
	return (str);
}

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)b;
	while (i < len)
		ptr[i++] = '\0';
	return (b);
}

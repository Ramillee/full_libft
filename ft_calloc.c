#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = NULL;
	ptr = malloc(count * size);
	if (ptr)
		return (ft_bzero(ptr, count * size));
	return (NULL);
}

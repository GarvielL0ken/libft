#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	ft_bzero(ptr, size);
	return(ptr);
}
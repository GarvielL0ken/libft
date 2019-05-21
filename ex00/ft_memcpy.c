#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *buff_dest;
	unsigned char *buff_src;
	size_t i;

	buff_dest = (unsigned char *)dest;
	buff_src = (unsigned char *)src;
	i = 0;

	while (i < n)
	{
		buff_dest[i] = buff_src[i];
		i++;
	}
	return (buff_dest);
}
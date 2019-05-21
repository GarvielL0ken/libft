#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *buff;

	buff = (unsigned char *)s;
	while (0 < n)
	{
		if (*buff == c)
			return (buff);
		buff++;
		n--;
	}
	return (NULL);
}
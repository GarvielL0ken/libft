
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	while (0 < n)
	{
		if (*s == c)
			return (*s);
		s++;
		n--;
	}
	return (NULL);
}

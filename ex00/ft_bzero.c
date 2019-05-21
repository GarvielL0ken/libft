#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *buff;
	size_t i;

	buff = (char *)s;
	i = 0;
	while (i < n)
	{
		buff[i] = 0;
		i++;
	}
}

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *buff;
	int i;

	buff = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		buff[i] = (unsigned char)c;
		i++;
	}
	
	return (b);
}
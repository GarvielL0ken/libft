#include "libft.h"

void ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *buff_dest;
	unsigned char *buff_src;
	unsigned char *buff_temp;
	size_t i;

	buff_dest = (unsigned char*)dest;
	buff_src = (unsigned char*)src;
	buff_temp = (unsigned char*)malloc(n);

	i = 0;
	while(i < n)
	{
		buff_temp[i] = buff_src[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		buff_dest[i] = buff_temp[i];
		i++;
	}
}

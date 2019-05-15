
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	while(len > 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
		len--;
	}
	
	return (b);
}

int main()
{
	char *s = "apple";

	s = ft_memset(s, '.', 2);
	printf("%s", s);
}

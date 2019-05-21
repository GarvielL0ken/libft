#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void bzero(void *s, size_t n)
{
	while (n > 0)
	{
		memset(s, '\0', n);
		s++;
		n--;
	}
} 

int main()
{
	char *str = "apple";
	int i;

	bzero(str, 5);
	printf("%s\n", str);
}
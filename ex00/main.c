#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(int argc, char const *argv[])
{
	int i;
	int j;
	int k;

	if (argc != 1)
	{
		if (strcmp("atoi", argv[1]) == 0)
		{
			i = ft_atoi(argv[2]);
			printf("%d + 42 = %d\n", i, i + 42);
			printf("%d * 42 = %d\n", i, i * 42);
			printf("%d ^ 2 = %d\n", i, i * i);
		}
		if (strcmp("isalnum", argv[1]) == 0)
		{
			i = ft_isalnum(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("isalpha", argv[1]) == 0)
		{
			i = ft_isalpha(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("isascii", argv[1]) == 0)
		{
			i = ft_isascii(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("isprint", argv[1]) == 0)
		{
			i = ft_isprint(*argv[2]);
			printf("%d\n", i);
		}
	}
	return (0);
}
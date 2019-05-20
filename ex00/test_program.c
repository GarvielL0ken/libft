#include <stdio.h>
#include <string.h>

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
	}
}
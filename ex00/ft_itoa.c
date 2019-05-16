
#include <stdio.h>
#include <stdlib.h>

int ft_calcorder(int n)
{
	int order;

	order = 1;
	while (n > 10)
	{
		order++;
		n /= 10;
	}
	return (n);
}

char *ft_itoa(int n)
{
	char *s;


}

int main(int argc, char *argv[])
{
	char *s;
	int n;
	
	n = atoi(argv[1]);
	s = ft_itoa(n);
	printf("%s\n", s);
}

#include "libft.h"

void ft_putstr_fd(char const *str, int fd)
{
	while (*str != '\0')
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}

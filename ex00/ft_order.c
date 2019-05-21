#include "libft.h"

int ft_order(int n)
{
	if (n >= 10)
		return (ft_order(n/10) + 1);
	else
		return(1);
}
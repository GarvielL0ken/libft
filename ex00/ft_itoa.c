/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:53:33 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 15:49:40 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		negative;
	int		len;
	long	nbr;
	char	*str;

	nbr = (long)n;
	negative = 0;
	if (nbr < 0)
	{
		negative = 1;
		nbr = -nbr;
	}

	len = ft_order(nbr) + negative;
		printf("%d\n", len);
	str = (char *)malloc(len + 1);
	str[len--] = '\0';
	if (negative)
		str[0] = '-';
	if (nbr == 0)
		str[len] = '0';
	while (nbr > 0)
	{
		str[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

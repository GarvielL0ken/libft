/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:53:33 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 10:54:28 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		negative;
	int		len;
	char	*str;

	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	len = ft_order(n) + negative;
	str = (char *)malloc(len + 1);
	str[len--] = '\0';
	if (negative)
		str[0] = '-';
	while (n > 0)
	{
		str[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

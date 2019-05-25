/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:39:28 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/25 14:08:59 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	long n;
	int negative;

	n = 0;
	negative = 1;
	i = 0;
	while (!ft_isdigit(str[i]) && str[i] != '-')
	{
		if (str[i] == '\e')
			return (0);
		i++;
	}
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && (ft_isdigit(str[i])))
	{
		n = n + str[i] - '0'; 
		n = n * 10;	
		i++;
	}
	n = (n / 10) * negative;
	return (n);
}

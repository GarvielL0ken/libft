/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:39:28 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 10:59:25 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n = n + (*str - '0');
		n *= 10;
		str++;
	}
	n = n / 10;
	return (n);
}

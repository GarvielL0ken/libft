/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:30:32 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/23 11:39:03 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	while (size > 0)
		str[size--] = '\0';
	return (str);
}

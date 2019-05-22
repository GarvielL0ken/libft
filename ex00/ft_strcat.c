/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:41:43 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 10:38:39 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t len_s1;
	int i;
	printf("%p\n", s1);

	len_s1 = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len_s1 + i] = s2[i];
		i++;
	}
	s1[len_s1 + i] = '\0';
	return (s1);
}

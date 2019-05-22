/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:08 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 14:17:27 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strdup(const char *s1)
{
	char	*str_dup;
	int		len;
	int		i;

	len = ft_strlen(s1);
	str_dup = (char *)malloc(len + 1);
	i = 0;
	while (i < len)
	{
		str_dup[i] = s1[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}

int main()
{
	char *str_1;
	char *str_2;
	int i;
	
	i = 0;	
	str_1 = (char *)malloc(6);
	while (i < 5)
		str_1[i++] = 'a';
	str[i] = '\0';
	str_2 = ft_strdup(str_1);
	printf("%s\n", str_2);
}

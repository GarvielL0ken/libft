/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:36:45 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 19:54:02 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(int argc, char const *argv[])
{
	int i;
	int j;
	int k;
	char *str;

	i = 43;
	if (argc != 1)
	{
		if (strcmp("atoi", argv[1]) == 0)
		{
			i = ft_atoi(argv[2]);
			printf("%d + 42 = %d\n", i, i + 42);
			printf("%d * 42 = %d\n", i, i * 42);
			printf("%d ^ 2 = %d\n", i, i * i);
		}
		//if (bzero)
		if (strcmp("isalnum", argv[1]) == 0)
		{
			i = ft_isalnum(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("isalpha", argv[1]) == 0)
		{
			i = ft_isalpha(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("isascii", argv[1]) == 0)
		{
			i = ft_isascii(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("isprint", argv[1]) == 0)
		{
			i = ft_isprint(*argv[2]);
			printf("%d\n", i);
		}
		if (strcmp("itoa", argv[1]) == 0)
		{
			str = ft_itoa(i);
			printf("The answer to life, the universe and everything is %s\n", str);
		}
		//if (memalloc)
	}
	return (0);
}

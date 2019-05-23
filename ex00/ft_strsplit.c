/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:32:49 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/23 15:21:56 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_putchar.c"
#include "ft_putchar_fd.c"

char **ft_strsplit(char const *s, char c)
{
	char	**buff;
	int		i;
	int		j;
	int		k;

	buff = (char **)malloc(256);
	buff[0] = (char *)malloc(256);
	buff[1] = (char *)malloc(256);
	i = 1;
	j = 0;
	k = 0;
	if (s[0] != c)
		buff[0][0] = s[0];
	//while (s[i] != '\0')
	//{
	//	if (s[i] != c)
	//		buff[j][k] = s[i];
	//	i++;
	//}
	//j++;
	buff[1][0] = '\0';
	return (buff);
}

int main(int argc, char *argv[])
{
	char c;
	char **buff;
	int i;


	if (argc == 3)
	{
		c = argv[2][0];
		buff = ft_strsplit(argv[1], c);
		i = 0;
		while (buff[i][0] != '\0')
		{
			printf("%s\n", buff[i]);
			i++;
		}
	}
}

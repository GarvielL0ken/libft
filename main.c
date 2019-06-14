/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:56:50 by jsarkis           #+#    #+#             */
/*   Updated: 2019/06/14 16:08:09 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		if (ft_strcmp(argv[1], "atoi") == 0)
		{
			if (argc == 3)
			{
				if (ft_strcmp(argv[2], "test_18") == 0)
					printf("ft_atoi(\"\\n   42 24\") = %d\natoi(\"\\n   42 24\") = %d\n", ft_atoi("\n   42 24"), atoi("\n   42 24"));
				else if (ft_strcmp(argv[2], "test_30") == 0)
					printf("ft_atoi(\"  \\t\\n  \\r\\r\\v\\f-899\") = %d\natoi(\"  \\t\\n  \\r\\r\\v\\f-899\") = %d\n", ft_atoi("  \t\n  \r\r\v\f-899"), atoi("  \t\n  \r\r\v\f-899"));
				else
					printf("ft_atoi(\"%s\") = %d\natoi(\"%s\") = %d\n", argv[2], ft_atoi(argv[2]), argv[2], atoi(argv[2]));
			}
			else
				printf("ft_atoi(\"\") = %d\natoi(\"\") = %d\n", ft_atoi(""), atoi(""));
		}
		else if (ft_strcmp(argv[1], "strnequ") == 0)
		{
			printf("ft_strnequ(\"apple\", \"\") ==%d\nexpected = 1\n", ft_strnequ("abcde", "", 0));
		}
	}
}

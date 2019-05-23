/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:36:45 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/23 18:37:09 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_putnbr_fd.c"
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"

int main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{	
		i = atoi(argv[1]);
		ft_putnbr_fd(i, 1);
	}
}

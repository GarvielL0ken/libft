/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:57:55 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/25 13:22:46 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;
	char	c;

	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		(*f)(&c);
		s[i] = c;
		i++;
	}
}
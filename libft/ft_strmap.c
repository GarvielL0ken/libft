/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:41:40 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/25 11:26:40 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str_res;
	char	c;
	int		len;
	int		i;

	len = ft_strlen(s);
	str_res = (char *)malloc(len + 1);
	if (!str_res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		c = s[i];
		c = (*f)(c);
		str_res[i++] = c;
	}
	str_res[len] = '\0';
	return (str_res);
}
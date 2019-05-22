/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:50:40 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 19:52:47 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_res;
	char	c;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	str_res = (char *)malloc(len);
	i = 0;
	while (i < len)
	{
		c = s[i];
		c = (*f)(i, c);
		str_res[i++] = c;
	}
	str_res[len] = '\0';
	return (str_res);
}

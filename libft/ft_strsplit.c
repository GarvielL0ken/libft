/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:32:49 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/26 14:34:13 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**buff;
	int		i;
	int		j;

	buff = (char **)malloc(sizeof(char *) * (ft_num_words(s, c) + 1));
	if (!s || !buff)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_num_words(s, c))
	{
		while (s[j] == c)
			j++;
		buff[i] = ft_find_str(s, c, j);
		while (s[j] != c && s[j])
			j++;
	}
	buff[i] = 0;
	return ((char **)buff);
}

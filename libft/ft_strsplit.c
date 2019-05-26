/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:32:49 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/26 13:58:09 by jsarkis          ###   ########.fr       */
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
	i = 0;
	j = 0;
	while (i < ft_num_words(s, c))
	{
		while (s[j] == c)
			j++;
		buff[i] = ft_find_str(s, c, j);
		i++;
		while (s[j] != c && s[j])
			j++;
	}
	buff[i] = (char *)malloc(1);
	buff[i][0] = '\0';
	return ((char **)buff);
}

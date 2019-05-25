/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:32:49 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/25 17:08:01 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_split(char const *s, char c)
{
	int i;
	int count;

	i = 1;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_find_str(char const *s, char c, int start)
{
	int len;
	int i;
	char *str;

	i = start;
	while (s[i] != c && s[i] != '\0')
		i++;
	i--;
	len = i - start + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**buff;
	int		num_words;
	int		i;
	int		j;

	num_words = ft_num_split(s, c);
	buff = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!buff)
		return (NULL);
	i = 1;
	j = 0;
	if (s[0] != c)
	{
		buff[0] = ft_find_str(s, c, 0);
		j++;
	}
	while (j < num_words)
	{
		if (s[i - 1] == c && s[i] != c)
		{
			buff[j] = ft_find_str(s, c, i);
			j++;
		}
		i++;
	}
	buff[j] = (char *)malloc(1);
	buff[j][0] = '\0';
	return ((char **)buff);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:42:10 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/25 16:10:11 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*ptr;

	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (s[start] == '\0')
		return ("");
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	ptr = malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	i = start;
	while (i <= end)
	{
		ptr[i - start] = s[i];
		i++;
	}
	ptr[i - start] = '\0';
	return (ptr);
}

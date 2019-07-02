/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpyi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 12:36:16 by jsarkis           #+#    #+#             */
/*   Updated: 2019/07/02 18:50:49 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncpyi(char **dst, const char *src, int len, int dst_index)
{
	int	i;

	i = 0;
	while (src[i] && i != len)
	{
		*(*dst + dst_index) = src[i];
		i++;
		dst_index++;
	}
	return (dst_index);
}

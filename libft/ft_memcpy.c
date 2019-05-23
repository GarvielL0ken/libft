/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 19:21:04 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/23 17:32:08 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*buff_dest;
	unsigned char	*buff_src;
	size_t			i;
	
	if (dest && src)
	{
		buff_dest = (unsigned char *)dest;
		buff_src = (unsigned char *)src;
		i = 0;
		while (i < n)
		{
			buff_dest[i] = buff_src[i];
			i++;
		}
		return (buff_dest);
	}
	return (0);
}

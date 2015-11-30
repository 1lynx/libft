/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:16:53 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:24:40 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp;
	unsigned char *tmp2;

	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			tmp[len] = tmp2[len];
			len--;
		}
	}
	else if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

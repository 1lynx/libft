/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:15:56 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:16:04 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	while ((i < n) && (tmp2[i] != c))
	{
		tmp[i] = tmp2[i];
		i++;
	}
	if (tmp2[i] == c)
	{
		tmp[i] = c;
		i++;
		return (dst + i);
	}
	else
		return (NULL);
}

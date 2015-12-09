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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*cst_dst;
	char		*cst_src;
	char		*tmp;
	size_t		i;

	i = 0;
	cst_dst = (char *)dst;
	cst_src = (char *)src;
	if (cst_dst == NULL || cst_src == NULL)
		return (0);
	tmp = (char *)malloc(sizeof(*tmp) * ft_strlen(cst_src));
	if (tmp == NULL)
		return (NULL);
	tmp = ft_strcpy(tmp, cst_src);
	while (i < n)
	{
		cst_dst[i] = tmp[i];
		i++;
	}
	return (cst_dst);
}

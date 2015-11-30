/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:21:41 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:21:50 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2 == '\0')
		return ((char *)s1);
	while (s1[i] && s2)
	{
		n--;
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j])
			{
				i++;
				j++;
				if (s2[j] == '\0')
					return ((char *)s1 + (i - j));
			}
		}
		else
			i++;
	}
	return (NULL);
}

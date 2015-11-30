/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:20:42 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:20:46 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t count;
	size_t count2;

	count = 0;
	count2 = ft_strlen(s1);
	if (s1[count] == '\0')
	{
		while (s2[count2] && count2 < n)
		{
			s1[count] = s2[count2];
			count++;
			count2++;
		}
	}
	s1[count] = '\0';
	return (s1);
}

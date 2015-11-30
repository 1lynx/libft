/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:20:50 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:21:05 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] && s2[count] && count < n)
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

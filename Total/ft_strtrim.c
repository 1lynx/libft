/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:22:29 by cchampda          #+#    #+#             */
/*   Updated: 2015/11/29 14:22:32 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	j = ft_strlen(s);
	if (ptr == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[j] == '\0')
	{
		j--;
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
	}
	ptr = ft_strsub(s, i, j - i + 1);
	return (ptr);
}

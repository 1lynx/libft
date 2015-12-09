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
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = -1;
	if (s == NULL)
		return (0);
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * j + 1);
	ft_bzero(str, j + 1);
	if (str == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == '\0')
		j--;
	while (i <= j)
	{
		str[++k] = s[i];
		i++;
	}
	str[++k] = '\0';
	return (str);
}

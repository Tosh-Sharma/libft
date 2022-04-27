/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:43:09 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/27 19:05:54 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				count++;
			j++;
		}
		i++;
	}
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) - count + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!ft_strchr(set, s1[i]))
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}

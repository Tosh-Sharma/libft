/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:43:09 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/27 20:18:59 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_helper(size_t i, size_t j, char const *s1, char const *set)
{
	size_t	count;

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
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	count = trim_helper(i, j, s1, set);
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

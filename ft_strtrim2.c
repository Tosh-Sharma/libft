/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:31:11 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/27 17:48:14 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (-1);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_trimshort(char *str, char *set, int value)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = value + (int)ft_strlen(set);
	res = (char *)malloc(sizeof(char) * (ft_strlen(str) - ft_strlen(set) + 1));
	if (!res)
		return (NULL);
	while (i < (int)value)
	{
		res[i] = str[i];
		i++;
	}
	while (j < (int)ft_strlen(str))
	{
		res[i] = str[j];
		i++;
		j++;
	}
	res[i] = '\0';
	free(str);
	return (res);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		value;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	res = ft_strcpy(res, (char *)s1);
	if (!res)
		return (NULL);
	while (1)
	{
		value = ft_strstr(res, (char *)set);
		if (value != -1)
			res = ft_trimshort(res, (char *)set, value);
		else
			return (res);
	}
}

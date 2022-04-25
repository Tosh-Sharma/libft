/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:14:17 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/25 16:27:21 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	if (s == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			res = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		res = (char *)&s[i];
	}
	return (res);
}

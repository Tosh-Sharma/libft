/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:58:27 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/25 17:19:27 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	while (i < n || ((unsigned char *)s)[i] != '\0')
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			res = (char *)&s[i];
			return (res);
		}
		i++;
	}
	return (NULL);
}

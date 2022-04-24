/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:49:46 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/24 18:45:46 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_size;
	size_t	i;

	dest_size = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return ft_strlen(src);
	while (src[i] != '\0' && i < (dstsize - dest_size - 1))
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	if (dest_size > dstsize)
		return (dstsize + ft_strlen(src));
	return (dest_size + ft_strlen(src));
}

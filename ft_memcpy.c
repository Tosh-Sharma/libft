/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:50:20 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/24 16:10:02 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const unsigned char	*src_cpy;
	unsigned char		*dst_cpy;

	i = 0;
	src_cpy = src;
	dst_cpy = dst;
	while (i < n)
	{
		dst_cpy[i] = (unsigned char)src_cpy[i];
		i++;
	}
	return (dst);
}

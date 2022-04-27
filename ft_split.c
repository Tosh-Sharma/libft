/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:12:27 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/27 20:10:48 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	*size_count;
	char	**res;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	size_count = (int *)malloc(sizeof(int) * count);
	res = (char **)malloc((sizeof(char **)) * count);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			size_count[k] = i - j;
			j = i;
			k++;
		}
		i++;
	}
	i = 0;
	while (i < count)
	{
		printf("%d: %d\n", i, size_count[i]);
		i++;
	}
	return (res);
}

int	main(void)
{
	ft_split("HELLO WORLD", 'O');
}

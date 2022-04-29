/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:18:09 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/29 18:13:15 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*handle_num(int n, int is_neg)
{
	char	s[11];
	char	*res;
	int		i;
	int		j;

	i = 0;
	while (n > 0)
	{
		s[i] = '0' + (n % 10);
		i++;
		n = n / 10;
	}
	s[i] = '\0';
	res = (char *)malloc(sizeof(char) * (i + is_neg));
	j = is_neg;
	i--;
	if (is_neg == 1)
		res[0] = '-';
	while (j - is_neg <= i)
	{
		res[j] = s[i - j + is_neg];
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	else
	{
		if (n < 0)
			return (handle_num(n * -1, 1));
		return (handle_num(n, 0));
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <tsharma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:26:12 by tsharma           #+#    #+#             */
/*   Updated: 2022/04/22 20:48:47 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) ||
			(str[i] >= 97 && str[i] <= 122) ||
			str[i] < 48 || str[i] > 57
			))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
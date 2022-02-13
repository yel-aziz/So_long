/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:09:51 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:18:16 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	calucatiing(long int n2, int k)
{
	while (n2 >= 10 || n2 <= -10)
	{
		n2 = n2 / 10;
		k++;
	}
	return (k);
}

long int	switching(long int n2, char *result, int *i)
{
	if (n2 < 0)
	{
		result[0] = '-';
		(*i)++;
		n2 *= -1;
	}
	return (n2);
}

char	*ft_itoa(int n)
{
	int				i;
	int				k;
	char			*result;
	long long int	n2;

	n2 = (long int)n;
	i = 0;
	k = 1;
	result = 0;
	k = calucatiing(n2, k);
	if (n < 0)
		k++;
	result = (char *)malloc(sizeof(char) * (k + 1));
	if (!result)
		return (NULL);
	n2 = switching (n2, result, &i);
	result [k] = '\0';
	while (i < k)
	{
		result[k - 1] = n2 % 10 + 48;
		n2 = n2 / 10;
		k--;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:10:02 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 17:50:22 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putnbr(int n)
{
	long	n1;

	n1 = n;
	if (n1 >= 0 && n1 <= 9)
	{
		ft_putchar(n1 + 48);
	}
	if (n1 >= 10)
	{
		ft_putnbr(n1 / 10);
		ft_putchar(n1 % 10 + 48);
	}
}
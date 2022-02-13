/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemiefinder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:14:59 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:18:27 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_finder_n(t_variable *p)
{
	p->up = 0;
	p->down = 0;
	while (p->p[p->up])
	{
		p->down = 0;
		while (p->p[p->up][p->down])
		{
			if (p->p[p->up][p->down] == 'N')
			{
				return ;
			}
			p->down++;
		}
		p->up++;
	}
}

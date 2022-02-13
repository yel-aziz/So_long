/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemierander.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:31:26 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:18:24 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	enemie_rander(t_variable *p)
{
	if (p->p[p->up][p->down - 1] != '1' && p->p[p->up][p->down - 1] != 'C'
			&& p->p[p->up][p->down - 1] != 'P')
	{
		if (p->p[p->up][p->down] == 'N')
		{
			p->p[p->up][p->down] = '0';
			p->p[p->up][p->down - 1] = 'N';
			p->down -= 1;
		}
	}
	ft_animation(p);
	if (p->p[p->i][p-> j + 1] == 'N' || p->p[p->i][p->j - 1] == 'N')
	{
		ft_putstr("you lose");
		exit (0);
	}
}

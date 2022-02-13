/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhoks_down_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:03:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:18:13 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	keyhoks_parttoo(t_variable *variable, int keycode)
{
	if (keycode == 1)
	{
		keyhoks_1(variable);
		if (variable->p[variable->i + 1][variable->j] == 'E'
			&& variable-> k == 0)
		{
			ft_putstr("you wiiiiiin");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		if (variable->p[variable->i + 1][variable->j] == 'N'
			&& variable-> k == 0)
		{
			ft_putstr("you LOSE");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		enemie_move(variable);
	}
}

void	keyhoks_down_right(t_variable *variable, int keycode)
{
	if (keycode == 0)
	{
		keyhoks_0(variable);
		if (variable->p[variable->i][variable->j - 1] == 'E'
				&& variable-> k == 0)
		{
			ft_putstr("you wiiiiiin");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		if (variable->p[variable->i][variable->j - 1] == 'N'
			&& variable-> k == 0)
		{
			ft_putstr("you LOSE");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		enemie_move(variable);
	}
	keyhoks_parttoo(variable, keycode);
}

void	keyhoks_1(t_variable *variable)
{
	if (variable->p[variable->i + 1][variable->j] == '0')
	{
		variable->p[variable->i + 1][variable->j] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i -= 1;
		variable->move += 1;
		ft_animation(variable);
	}
	else if (variable->p[variable->i + 1][variable->j] == 'C')
	{
		variable->p[variable->i + 1][variable->j] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i -= 1;
		variable->k--;
		variable->move += 1;
		ft_animation(variable);
	}
}

void	keyhoks_0(t_variable *variable)
{
	if (variable->p[variable->i][variable->j - 1] == '0')
	{
		variable->p[variable->i][variable->j - 1] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i -= 1;
		variable->move += 1;
		ft_animation(variable);
	}
	else if (variable->p[variable->i][variable->j - 1] == 'C')
	{
		variable->p[variable->i][variable->j - 1] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i -= 1;
		variable->k--;
		variable->move += 1;
		ft_animation(variable);
	}
}

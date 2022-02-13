/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhoks_up_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:59:41 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:18:04 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_keyhooktoo(t_variable *variable, int keycode)
{
	if (keycode == 2)
	{
		ft_keyhooks_2(variable);
		if (variable->p[variable->i][variable->j + 1] == 'E'
			&& variable-> k == 0)
		{
			ft_putstr("you wiiiiiin");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		if (variable->p[variable->i][variable->j + 1] == 'N'
			&& variable-> k == 0)
		{
			ft_putstr("you LOSE");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		enemie_move(variable);
	}
}

void	ft_keyhok_up_left(t_variable *variable, int keycode)
{
	if (keycode == 13)
	{
		ft_keyhooks_13(variable);
		if (variable->p[variable->i - 1][variable->j] == 'E'
			&& variable->k == 0)
		{
			ft_putstr("you wiiiiiin");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		if (variable->p[variable->i - 1][variable->j] == 'N'
			&& variable->k == 0)
		{
			ft_putstr("you LOSE");
			mlx_destroy_window(variable->mlx, variable->mlx_win);
			exit (0);
		}
		enemie_move(variable);
	}
	ft_keyhooktoo(variable, keycode);
}

void	ft_keyhooks_13(t_variable *variable)
{
	if (variable->p[variable->i - 1][variable->j] == '0')
	{
		variable->p[variable->i - 1][variable->j] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i -= 1;
		variable->move += 1;
	}
	else if (variable->p[variable->i - 1][variable->j] == 'C')
	{
		variable->p[variable->i - 1][variable->j] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i -= 1;
		variable->k--;
		variable->move += 1;
	}
}

void	ft_keyhooks_2(t_variable *variable)
{
	if (variable->p[variable->i][variable->j + 1] == '0')
	{
		variable->p[variable->i][variable->j + 1] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i += 1;
		variable->move += 1;
	}
	else if (variable->p[variable->i][variable->j + 1] == 'C')
	{
		variable->p[variable->i][variable->j + 1] = 'P';
		variable->p[variable->i][variable->j] = '0';
		variable->i += 1;
		variable->k--;
		variable->move += 1;
	}
}

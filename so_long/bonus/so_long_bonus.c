/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:28:11 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:15:31 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	enemie_move(t_variable *variable)
{
	ft_finder_n(variable);
	enemie_rander(variable);
	return (0);
}

int	key_hook(int keycode, t_variable *variable)
{	
	ft_finder(variable);
	ft_keyhok_up_left(variable, keycode);
	keyhoks_down_right(variable, keycode);
	ft_animation(variable);
	if (keycode == 53)
	{
		mlx_destroy_window(variable->mlx, variable->mlx_win);
		exit (0);
	}
	mlx_clear_window(variable->mlx, variable->mlx_win);
	ft_rander(variable);
	return (0);
}

int	ft_exit(void)
{
	exit (0);
}

void	ft_main_helper(char **c)
{
	if (ft_strncmp(ft_strrchr(c[1], '.'), ".ber", 5) != 0)
	{
		ft_putstr("error parametre .ber nedded");
		exit(0);
	}	
}

int	main(int ac, char **c)
{
	t_variable	variable;
	t_map		so_te;
	int			fd;
	char		tr[99999];

	if (ac > 2)
		exit(1);
	fd = open(c[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error parametre map");
		exit (0);
	}
	variable.p = parcing_map(fd, tr);
	variable.n = testeur_map(variable.p, &so_te);
	if (variable.n == 0)
	{
		ft_putstr("error map");
		exit(0);
	}
	ft_helper_help(&variable, c);
	mlx_key_hook(variable.mlx_win, key_hook, &variable);
	mlx_hook(variable.mlx_win, 17, (1L << 17), ft_exit, &variable);
	variable.k = so_te.c;
	mlx_loop(variable.mlx);
}

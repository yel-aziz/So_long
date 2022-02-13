/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:30:10 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:18:29 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_converter(t_variable *so)
{
	int	k;
	int	b;

	k = 0;
	b = 0;
	so->wall = mlx_xpm_file_to_image(so->mlx, "wall.xpm", &k, &b);
	so->floor = mlx_xpm_file_to_image(so->mlx, "floor.xpm", &k, &b);
	so->player = mlx_xpm_file_to_image(so->mlx, "satoshiplayer.xpm", &k, &b);
	so->collect = mlx_xpm_file_to_image(so->mlx, "btc.xpm", &k, &b);
	so->exit = mlx_xpm_file_to_image(so->mlx, "exit.xpm", &k, &b);
	so->enemie = mlx_xpm_file_to_image(so->mlx, "enemie.xpm", &k, &b);
	so->cllectto = mlx_xpm_file_to_image(so->mlx, "floor.xpm", &k, &b);
}

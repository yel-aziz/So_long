/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walltest_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:27:34 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:22:35 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	walltest(char **p, t_map *test)
{
	while (p[test->n] && p[test->n][0] == '1')
	{
		test->n++;
	}
	while (p[test->k] && p[test->k][test->j - 1] == '1')
	{
		test->k++;
	}
	if (test->n != test->k)
	{
		return (0);
	}
	while (test->l != test->k)
	{
		while (p[test->l][test->m])
		{
			test->m++;
		}
		test->l++;
	}
	if (test->m != test->i && test->m != test->j)
	{
		return (0);
	}
	return (1);
}

void	initialisation(t_map *test)
{
	test->i = 0;
	test->j = 0;
	test->j = 0;
	test->k = 0;
	test->l = 0;
	test->m = 0;
	test->n = 0;
	test->q = 0;
	test->q = 0;
	test->t = 0;
}

int	check_lines(char **p, t_map *test)
{
	while (p[test->n])
	{
		test->n++;
	}
	while (p[0][test->i] == '1')
	{
		test->i++;
	}
	while (p[test->n - 1][test->j] == '1')
	{
		test->j++;
	}
	if (test->i != test->j)
	{
		return (0);
	}
	return (1);
}

void	ft_mainhelper_to(t_variable *variable)
{
	variable->l = calcule_l(variable->p);
	variable->w = calcule_w(variable->p);
	variable->mlx = mlx_init();
	variable->mlx_win = mlx_new_window(variable->mlx, (variable->l * 100),
			(variable->w * 100), "so_long");
}

void	ft_helper_help(t_variable *variable, char **c)
{
	ft_main_helper(c);
	ft_mainhelper_to(variable);
	ft_converter(variable);
	ft_rander(variable);
}

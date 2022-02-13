/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:50:57 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 21:16:09 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct so_long_tester
{
	int	i;
	int	k;
	int	n;
	int	j;
	int	m;
	int	l;
	int	q;
	int	w;
	int	t;
	int	c;
}t_map;

typedef struct so_long
{
	void	*mlx;
	void	*mlx_win;
	void	*img_obj;
	char	**p;
	void	*wall;
	void	*floor;
	void	*player;
	void	*collect;
	void	*exit;
	void	*enemie;
	int		k;
	int		j;
	int		x;
	int		i;
	int		n;
	int		y;
	int		l;
	int		w;
	int		up;
	int		down;
	int		move;
	char	*move_char;
	int		collect_enemie_eat;
	void	*cllectto;
	int		anime;
}t_variable;

char		**ft_split(char const *s, char c);
size_t		ft_strlen(char *p);
int			ft_strchr(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
void		ft_putchar(char c);
int			testeur_map(char **p, t_map *test);
void		ft_converter(t_variable *so);
void		ft_finder(t_variable *p);
int			ft_rander(t_variable *variable);
int			p_check(char **p, int n, int m);
void		c_check(char **p, int n, int m, t_map *cl);
int			walltest(char **p, t_map *test);
void		initialisation(t_map *test);
int			check_lines(char **p, t_map *test);
void		ft_keyhok_up_left(t_variable *variable, int keycode);
void		keyhoks_down_right(t_variable *variable, int keycode);
char		**parcing_map(int fd, char *tr);
void		ft_render_e(t_variable *variable);
int			countword(char const *s, char c);
int			lenword(char const *s, char c);
char const	*skipspace(char const *s, char c);
char		**ft_free(char **ar);
void		rander_enemie(t_variable *variable);
int			calucatiing(long int n2, int k);
long int	switching(long int n2, char *result, int *i);
char		*ft_itoa(int n);
void		enemie_rander(t_variable *p);
void		ft_finder_n(t_variable *p);
int			enemie_move(t_variable *variable);
int			ft_animation(t_variable *so);
void		ft_putstr(char *c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
void		keyhoks_1(t_variable *variable);
void		keyhoks_0(t_variable *variable);
void		ft_keyhooks_13(t_variable *variable);
void		ft_keyhooks_2(t_variable *varibale);
void		ft_rander_helper(t_variable *variable);
void		ft_movement(t_variable *variable);
void		ft_main_helper(char **c);
int			calcule_w(char **p);
int			calcule_l(char **p);
void		ft_mainhelper_to(t_variable *variable);
void		ft_helper_help(t_variable *variable, char **c);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:50:57 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/02/12 19:20:17 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

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
	int		k;
	int		j;
	int		x;
	int		i;
	int		n;
	int		y;
	int		l;
	int		w;
	int		move;
}t_variable;

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

char		**ft_split(char const *s, char c);
size_t		ft_strlen(char *p);
int			ft_strchr(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
void		ft_putchar(char c);
int			testeur_map(char **p, t_map *test);
void		ft_converter(t_variable *so);
void		ft_finder(t_variable *p);
void		ft_rander(t_variable *variable);
int			p_check(char **p, int n, int m);
void		c_check(char **p, int n, int m, t_map *cl);
int			walltest(char **p, t_map *test);
void		initialisation(t_map *test);
int			check_lines(char **p, t_map *test);
void		ft_keyhok_up_left(t_variable *variable, int keycode);
void		keyhoks_down_right(t_variable *variable, int keycode);
char		**parcing_map(int fd, char *tr);
void		ft_render_e(t_variable *variable);
void		ft_putchar(char c);
int			countword(char const *s, char c);
int			lenword(char const *s, char c);
char const	*skipspace(char const *s, char c);
char		**ft_free(char **ar);
void		ft_putstr(char *s);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_putnbr(int n);
void		main_too(int ac, char **c, int fd);
int			calcule_w(char **p);
int			calcule_l(char **p);
#endif

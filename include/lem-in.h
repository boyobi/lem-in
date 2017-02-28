/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbetz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 01:38:22 by bbetz             #+#    #+#             */
/*   Updated: 2017/02/27 01:40:13 by bbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <../libft/include/libft.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_room t_room;
typedef struct s_link t_link;

struct	s_link
{
	t_room *room;
	t_link *next;
};

struct	s_room
{
	char	*name;
	int		nb_ants;

	int		coord[2];
	
	int		start;
	int		end;

	t_link *connection;
	t_room *next;
};

typedef struct	s_env
{
	char		**original_map;
	t_room		*start;
	int			nb_ants;
}				t_env;

int		parse_map(char **map, t_env *env);

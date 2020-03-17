/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 17:21:44 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/13 17:39:38 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		read_command(t_folder **st_a, t_folder **st_b, char *line, t_num *sl)
{
	int i;

	i = ft_strlen(line);
	if (i == 2 && line[0] == 's' && line[1] == 'a')
		sa(st_a, 0);
	else if (i == 2 && line[0] == 's' && line[1] == 'b')
		sb(st_b, 0);
	else if (i == 2 && line[0] == 's' && line[1] == 's')
		ss(st_a, st_b, 0);
	else if (i == 2 && line[0] == 'p' && line[1] == 'a')
		pa(st_a, st_b, sl, 0);
	else if (i == 2 && line[0] == 'p' && line[1] == 'b')
		pb(st_a, st_b, sl, 0);
	else if (i == 2 && line[0] == 'r' && line[1] == 'a')
		ra(st_a, 0);
	else if (read_command2(st_a, st_b, line))
		return (1);
	return (0);
}

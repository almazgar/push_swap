/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_command2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:55:09 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 13:23:39 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		read_command2(t_folder **st_a, t_folder **st_b, char *line)
{
	int i;

	i = ft_strlen(line);
	if (i == 2 && line[0] == 'r' && line[1] == 'b')
		rb(st_b, 0);
	else if (i == 2 && line[0] == 'r' && line[1] == 'r')
		rr(st_a, st_b, 0);
	else if (i == 3 && line[0] == 'r' && line[1] == 'r' && line[2] == 'a')
		rra(st_a, 0);
	else if (i == 3 && line[0] == 'r' && line[1] == 'r' && line[2] == 'b')
		rrb(st_b, 0);
	else if (i == 3 && line[0] == 'r' && line[1] == 'r' && line[2] == 'r')
		rrr(st_a, st_b, 0);
	else
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 17:23:36 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 17:21:46 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		main(int argc, char **argv)
{
	char		*line;
	t_folder	*st_a;
	t_folder	*st_b;
	t_num		sl;

	st_a = NULL;
	st_b = NULL;
	if (argc != 1)
		st_a = read_number(argv, &sl);
	else
		exit(-1);
	while (get_next_line(0, &line) == 1)
	{
		if (read_command(&st_a, &st_b, line, &sl))
			ft_print_error();
		if (line)
		{
			free(line);
			line = NULL;
		}
	}
	checker_cont(&st_a, sl);
	mem_free(&st_a, &st_b);
	return (0);
}

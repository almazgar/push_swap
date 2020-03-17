/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 17:17:12 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/12 17:18:14 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_folder	*read_number(char **argv, t_num *sl)
{
	int			i;
	char		**new;
	t_folder	*st_a;

	i = 1;
	sl->count_a = 0;
	sl->count_b = 0;
	st_a = NULL;
	while (argv[i])
	{
		new = ft_strsplit(argv[i], ' ');
		if (check_str(new))
			ft_print_error();
		sl->count_a += push_list(new, &st_a);
		if (sl->count_a < 0)
			exit(-1);
		i++;
		new_free(new);
	}
	return (st_a);
}

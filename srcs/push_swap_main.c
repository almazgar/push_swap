/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:11:31 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 11:14:26 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int				main(int argc, char **argv)
{
	int			i;
	char		**new;
	t_folder	*st_a;
	t_folder	*st_b;
	t_num		sl;

	sl.count_a = 0;
	sl.count_b = 0;
	st_b = NULL;
	st_a = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	else if (argc >= 2)
	{
		while (argc > i)
		{
			new = ft_strsplit(argv[i++], ' ');
			found_str(new, &st_a, &sl);
			new_free(new);
		}
		organizer(&st_a, &st_b, &sl);
		mem_free(&st_a, &st_b);
	}
	return (0);
}

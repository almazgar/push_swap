/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 13:24:13 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 11:31:53 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		organizer(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	int	i;

	index_st_a(st_a, sl);
	i = is_sorted(st_a);
	sl->mediana = sl->count_a / 2;
	sl->quarta = sl->mediana / 2;
	sl->octa = sl->count_a / 8;
	if (i && sl->count_a < 6)
		small_sort(st_a, st_b, sl);
	else if (i && sl->count_a < 21)
		sort_21(st_a, st_b, sl);
	else if ((i && sl->count_a < 102))
		sort_102(st_a, st_b, sl);
	else if (i)
		sort_103(st_a, st_b, sl);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 14:39:20 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/11 16:18:27 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	small_sort(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	if (sl->count_a == 2)
		if ((*st_a)->index > (*st_a)->next->index)
			sa(st_a, 1);
	if (sl->count_a == 3)
		sort_3index(st_a);
	if (sl->count_a > 3)
		sort_4_5index(st_a, st_b, sl);
}

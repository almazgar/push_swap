/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for5_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 17:40:40 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/11 17:46:31 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	for5_pb(t_folder **st_a, t_folder **st_b, t_num *sl, int i)
{
	int h;

	h = s_dis2(st_a, i);
	if (h < sl->count_a - h)
		while (h--)
			ra(st_a, 1);
	else
	{
		h = sl->count_a - h;
		while (h--)
			rra(st_a, 1);
	}
	pb(st_a, st_b, sl, 1);
}

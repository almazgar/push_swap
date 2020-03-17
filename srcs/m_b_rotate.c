/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_b_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 18:01:19 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 20:59:52 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	m_b_rotate(t_folder **st_a, t_folder **st_b, t_num *sl, int low)
{
	int h;

	h = s_dis2(st_b, low);
	if (h < sl->count_b - h)
		while (h--)
			rb(st_b, 1);
	else
	{
		h = sl->count_b - h;
		while (h--)
			rrb(st_b, 1);
	}
	pa(st_a, st_b, sl, 1);
}

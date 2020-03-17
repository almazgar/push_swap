/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 18:23:45 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 15:14:44 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move_back_2(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	int low;
	int high;
	int il;
	int ih;

	low = sl->mediana;
	high = low + sl->count_b - 1;
	while (*st_b)
	{
		il = s_dis(st_b, sl, low);
		ih = s_dis(st_b, sl, high);
		if (il < ih)
		{
			m_b_rotate(st_a, st_b, sl, low);
			if (sl->count_a > 1 && (*st_a)->next->index - (*st_a)->index != 1)
				ra(st_a, 1);
			low++;
		}
		else
		{
			m_b_rotate(st_a, st_b, sl, high);
			high--;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 18:05:57 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 21:00:59 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move_back11(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	int	low;
	int	high;
	int	il;
	int	ih;

	low = 0;
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

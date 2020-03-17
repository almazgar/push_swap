/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 20:27:06 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/25 20:33:04 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move12(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	while ((*st_a)->index != 0)
	{
		if (sl->quarta <= (*st_a)->index && (*st_a)->index < sl->mediana)
		{
			pb(st_a, st_b, sl, 1);
			if ((*st_b)->index > sl->octa * 3 && sl->count_b > 1)
				rb(st_b, 1);
		}
		else
			ra(st_a, 1);
	}
}

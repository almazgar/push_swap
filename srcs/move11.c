/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 18:45:10 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/25 18:49:15 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move11(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	while (sl->count_b < sl->quarta)
	{
		if ((*st_a)->index < sl->quarta)
		{
			pb(st_a, st_b, sl, 1);
			if ((*st_b)->index > sl->octa && sl->count_b > 1)
				rb(st_b, 1);
		}
		else
			ra(st_a, 1);
	}
}

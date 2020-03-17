/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 16:38:45 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/10 16:43:19 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move1(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	while (sl->count_b < sl->mediana)
	{
		if ((*st_a)->index < sl->mediana)
		{
			pb(st_a, st_b, sl, 1);
			if ((*st_b)->index > sl->quarta && sl->count_b > 1)
				rb(st_b, 1);
		}
		else
			ra(st_a, 1);
	}
}

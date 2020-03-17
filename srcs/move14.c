/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move14.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 20:36:46 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/10 16:06:29 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	move14(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	while ((*st_a)->index != 0)
	{
		pb(st_a, st_b, sl, 1);
		if ((*st_b)->index > sl->octa * 7 && sl->count_b > 1)
			rb(st_b, 1);
	}
}

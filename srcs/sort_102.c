/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_102.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 22:17:20 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 22:18:26 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sort_102(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	move1(st_a, st_b, sl);
	move_back(st_a, st_b, sl);
	while ((*st_a)->index != sl->mediana - 1)
		ra(st_a, 1);
	ra(st_a, 1);
	move2(st_a, st_b, sl);
	move_back_2(st_a, st_b, sl);
	while ((*st_a)->index != 0)
		ra(st_a, 1);
}

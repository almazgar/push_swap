/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_103.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 22:22:40 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 22:31:00 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sort_103(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	move11(st_a, st_b, sl);
	move_back11(st_a, st_b, sl);
	ajust_a(st_a, sl);
	move12(st_a, st_b, sl);
	ajust_a(st_a, sl);
	move_back12(st_a, st_b, sl);
	while ((*st_a)->index != sl->mediana - 1)
		ra(st_a, 1);
	ra(st_a, 1);
	move13(st_a, st_b, sl);
	while ((*st_a)->index != sl->mediana - 1)
		ra(st_a, 1);
	ra(st_a, 1);
	move_back13(st_a, st_b, sl);
	while ((*st_a)->index != sl->quarta * 3 - 1)
		ra(st_a, 1);
	ra(st_a, 1);
	move14(st_a, st_b, sl);
	move_back14(st_a, st_b, sl);
	while ((*st_a)->index != 0)
		ra(st_a, 1);
}

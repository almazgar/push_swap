/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:34:11 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/11 17:47:05 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sort_4_5index(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	for5_pb(st_a, st_b, sl, 0);
	if (sl->count_a == 4)
		for5_pb(st_a, st_b, sl, 1);
	sort_3index(st_a);
	while (sl->count_b)
		pa(st_a, st_b, sl, 1);
}

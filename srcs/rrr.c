/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:40:44 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/24 10:41:43 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	rrr(t_folder **st_a, t_folder **st_b, int i)
{
	if (st_a && st_b)
	{
		rra(st_a, i);
		rrb(st_b, i);
	}
	if (i)
		write(1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_21.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 21:54:29 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 21:54:29 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	sort_21(t_folder **st_a, t_folder **st_b, t_num *sl)
{
	int i;

	i = sl->count_a;
	while (i--)
		pb(st_a, st_b, sl, 1);
	simple_back(st_a, st_b, sl, 0);
}

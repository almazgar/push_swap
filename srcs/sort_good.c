/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_good.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 21:21:23 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/10 16:14:01 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		*sort_good(int *good, t_num *sl)
{
	int i;
	int j;

	i = 0;
	while (i < sl->count_a - 1)
	{
		j = i + 1;
		while (j < sl->count_a)
		{
			if (good[i] > good[j])
				ft_swap(&good[i], &good[j]);
			j++;
		}
		i++;
	}
	return (good);
}

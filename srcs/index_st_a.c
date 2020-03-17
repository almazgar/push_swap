/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_st_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 21:12:46 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/24 15:19:48 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void			index_st_a(t_folder **st_a, t_num *sl)
{
	int			i;
	int			good[sl->count_a];
	t_folder	*pos;

	i = 0;
	pos = (*st_a);
	good[sl->count_a] = '\0';
	while (i < sl->count_a)
	{
		good[i] = pos->data;
		i++;
		pos = pos->next;
	}
	sort_good(&good[0], sl);
	i = 0;
	while (i < sl->count_a)
	{
		pos = (*st_a);
		while (good[i] != pos->data)
			pos = pos->next;
		pos->index = i;
		i++;
	}
}

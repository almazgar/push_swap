/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:36:59 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/13 12:41:12 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void		pb(t_folder **st_a, t_folder **st_b, t_num *sl, int i)
{
	t_folder *buffer;

	if ((*st_a))
	{
		buffer = (*st_a);
		(*st_a) = (*st_a)->next;
		buffer->next = NULL;
		if ((*st_b) == NULL)
			(*st_b) = buffer;
		else
		{
			buffer->next = (*st_b);
			(*st_b) = buffer;
		}
		sl->count_a--;
		sl->count_b++;
		if (i)
			write(1, "pb\n", 3);
	}
}

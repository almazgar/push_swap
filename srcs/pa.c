/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:38:16 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/27 14:18:56 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void			pa(t_folder **st_a, t_folder **st_b, t_num *sl, int i)
{
	t_folder	*buffer;

	if ((*st_b))
	{
		buffer = (*st_b);
		(*st_b) = (*st_b)->next;
		buffer->next = NULL;
		if ((*st_a) == NULL)
			(*st_a) = buffer;
		else
		{
			buffer->next = (*st_a);
			(*st_a) = buffer;
		}
		sl->count_a++;
		sl->count_b--;
		if (i)
			write(1, "pa\n", 3);
	}
}

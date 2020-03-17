/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 10:40:08 by lgarse            #+#    #+#             */
/*   Updated: 2019/12/24 10:40:08 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void		rra(t_folder **st, int i)
{
	t_folder *front;
	t_folder *back;
	t_folder *begin;

	begin = *st;
	front = *st;
	back = *st;
	if (*st == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = begin;
		back->next = NULL;
	}
	*st = front;
	if (i)
		write(1, "rra\n", 4);
}

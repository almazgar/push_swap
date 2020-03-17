/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_cont.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:03:29 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 14:13:02 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void			checker_cont(t_folder **st_a, t_num sl)
{
	int			i;
	t_folder	*t;

	i = 0;
	t = (*st_a);
	if (sl.count_b)
		i = 1;
	while (t && t->next)
	{
		if (t->next)
			if (t->data > t->next->data)
				i = 1;
		t = t->next;
	}
	if (i)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 11:50:15 by lgarse            #+#    #+#             */
/*   Updated: 2020/01/14 11:57:15 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int				is_sorted(t_folder **st_a)
{
	t_folder	*t;
	int			i;

	i = 0;
	t = (*st_a);
	while (t && t->next)
	{
		if (t->next)
			if (t->data > t->next->data)
				i = 1;
		t = t->next;
	}
	return (i);
}
